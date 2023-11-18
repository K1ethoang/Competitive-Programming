/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~JJ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!&&!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~G&&G~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Y&&&&Y~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7&&&&&&7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~B&&&&&&B~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7Y55YYYYYYYYYYG&&&&&&&&GYYYYYYYYYY55Y7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!?P#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#P?!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?P#&&&&&&&&&&&&&&&&&&&&&&&&#P?~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?P#&&&&&&&&&&&&&&&&&&#P?!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!?B&&&&&&&&&&&&&&B?!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!#&&&&&&&&&&&&&&#!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~G&&&&&&&&&&&&&&&&G~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Y&&&&&&&G??G&&&&&&&Y~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7&&&&&GJ!~~~~!JG&&&&&7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~B&&GJ!~~~~~~~~~~!JG&&B~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~JGJ!~~~~~~~~~~~~~~~~!JGJ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!~~~~~~~~~~~~~~~~~~~~~~!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~
~~~~~/K1ethoang/~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~
~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~/K1ethoang/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~~~~~/K1ethoang/~~~~~~~~~~~~~~
 */

#include <bits/stdc++.h>
using namespace std;

#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define test()    \
    int test;     \
    cin >> test;  \
    cin.ignore(); \
    while (test--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(p) p.begin(), p.end()
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Fori(i, a, b) for (int i = b - 1; i >= a; --i)
#define Sort(p) sort(all(p))
#define Sortr(p) sort(p.rbegin(), p.rend())
#define rev(p) reverse(all(p))
#define FILEIN freopen("input.txt", "r", stdin)
#define FILEOUT freopen("output.txt", "w", stdout)
#define sy cout << "YES" << endl
#define sn cout << "NO" << endl
#define pause system("pause")
const ll MOD = (int)10e9 + 7;
/*
    Problem: https://cses.fi/problemset/task/1755/
    Completion time: 2023-11-18 13:46:05
 */

bool isPalindrome(string s)
{
    bool ok = true;
    For(i, 0, s.size() / 2)
    {
        if (s[i] != s[s.size() - i + 1])
        {
            ok = false;
            break;
        }
    }
    return ok;
}

int main()
{
    faster();
    string s;
    cin >> s;

    map<char, int> m;

    for (const char &x : s)
        m[x]++;

    int cntNotDivideBy2 = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (m[it->first] % 2 != 0)
            cntNotDivideBy2++;
    }

    if (cntNotDivideBy2 > 1)
        cout << "NO SOLUTION";
    else
    {
        vector<char> v(s.size(), ' ');

        auto it = m.begin();

        For(i, 0, v.size() / 2)
        {
            if (m[it->first] > 1)
            {
                v[i] = it->first;
                v[v.size() - i - 1] = it->first;
                m[it->first] -= 2;
            }
            else
            {
                while (m[it->first] <= 1)
                    it++;
                i--;
            }
        }

        if (v.size() % 2 != 0)
        {
            for (auto it = m.begin(); it != m.end(); it++)
            {
                if (m[it->first] == 1)
                {
                    v[s.size() / 2] = it->first;
                    break;
                }
            }
        }

        For(i, 0, v.size())
                cout
            << v[i];
    }

    return 0;
}