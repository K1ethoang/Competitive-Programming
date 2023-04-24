#include <bits/stdc++.h>
using namespace std;
/*
    Link problem: https://cses.fi/problemset/task/1070/
    Completion time: 2023-04-24 23:35:07
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n > 1 && n < 4)
        cout
            << "NO SOLUTION";
    else
    {
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }

    return 0;
}