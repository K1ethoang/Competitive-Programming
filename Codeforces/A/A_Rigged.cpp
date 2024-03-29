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

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
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
#define For(i, a, b) for (int i = a; i < b; i++)
#define Fori(i, a, b) for (int i = b - 1; i >= a; i--)
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
    Problem: https://codeforces.com/contest/1879/problem/A
    Completion time: Sep/24/2023 22:01 (UTC+7)
 */
int main()
{
    faster();
    test()
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v(n);

        For(i, 0, n)
        {
            ll s, e;
            cin >> s >> e;
            v[i] = mp(s, e);
        }

        ll res = v[0].fi;

        For(i, 1, n)
        {
            if (v[i].fi >= v[0].fi)
            {
                if (v[i].se >= v[0].se)
                {
                    res = -1;
                    break;
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}