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
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
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
    ════════════════════════════════════════════════════════════════════════════════════════════
        Problem: https://codeforces.com/contest/1915/problem/D
        Completion time: Dec/30/2023 09:59 (UTC+7)
    ════════════════════════════════════════════════════════════════════════════════════════════
 */
int main()
{
    faster();

    // V: a, e
    // C: b, c, d

    // -> CV, CVC

    test()
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<string> res;

        while (s.size() != 2 && s.size() != 3)
        {
            string len2 = s.substr(s.size() - 2);
            string len3 = s.substr(s.size() - 3);

            if (len2[1] == 'a' || len2[1] == 'e')
            {
                res.push(len2);
                s.erase(s.size() - 2);
            }
            else
            {
                res.push(len3);
                s.erase(s.size() - 3);
            }
        }

        cout << s;

        while (!res.empty())
        {
            cout << "." << res.top();
            res.pop();
        }
        cout << endl;
    }
    return 0;
}
/*
    ╔╗╔═╗─╔╗─╔═══╗╔════╗╔╗─╔╗╔═══╗╔═══╗╔═╗─╔╗╔═══╗
    ║║║╔╝╔╝║─║╔══╝║╔╗╔╗║║║─║║║╔═╗║║╔═╗║║║╚╗║║║╔═╗║
    ║╚╝╝─╚╗║─║╚══╗╚╝║║╚╝║╚═╝║║║─║║║║─║║║╔╗╚╝║║║─╚╝
    ║╔╗║──║║─║╔══╝──║║──║╔═╗║║║─║║║╚═╝║║║╚╗║║║║╔═╗
    ║║║╚╗╔╝╚╗║╚══╗──║║──║║─║║║╚═╝║║╔═╗║║║─║║║║╚╩═║
    ╚╝╚═╝╚══╝╚═══╝──╚╝──╚╝─╚╝╚═══╝╚╝─╚╝╚╝─╚═╝╚═══╝
*/