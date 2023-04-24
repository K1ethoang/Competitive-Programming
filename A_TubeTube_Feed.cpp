#include <bits/stdc++.h>
using namespace std;

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
            if (b[i] > lE)
            {
                lE = b[i];
                int tempK = k - i - a[i];
                if (tempK >= 0)
                    res = i + 1;
                else
                    break;
            }
        }
        cout << res << endl;
    }
    return 0;
}