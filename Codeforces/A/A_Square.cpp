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
        Problem: https://codeforces.com/contest/1921/problem/A
        Completion time: Feb/04/2024 20:22 (UTC+7)
    ════════════════════════════════════════════════════════════════════════════════════════════
 */
int main()
{
    faster();

    test()
    {
        int a1, b1, a2, b2;

        For(i, 0, 4)
        {
            int x, y;
            cin >> x >> y;

            if (i <= 0)
            {
                a1 = x;
                b1 = y;
            }
            else
            {
                if (x != a1)
                    a2 = x;
                if (y != b1)
                    b2 = y;
            }
        }

        cout << abs(b2 - b1) * abs(a2 - a1) << endl;
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