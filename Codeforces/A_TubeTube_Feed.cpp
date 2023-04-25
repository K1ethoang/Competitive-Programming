#include <bits/stdc++.h>
using namespace std;
/*
    Link problem: https://codeforces.com/contest/1822/problem/A
    Completion time: Apr/25/2023 13:49
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int res = -1, lE = 0;
        for (int i = 0; i < n; i++)
        {
            int tempK = k - i - a[i];
            if (tempK >= 0)
            {
                if (b[i] > lE)
                {
                    lE = b[i];
                    res = i + 1;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}