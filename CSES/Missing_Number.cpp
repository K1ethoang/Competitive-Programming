#include <bits/stdc++.h>
using namespace std;
/*
    Link problem: https://cses.fi/problemset/task/1083/
    Completion time: 2023-04-21 23:43:27
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n, res = 0;
    cin >> n;
    res = (n * (n + 1)) / 2;
    vector<int> a(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        res -= a[i];
    }
    cout << res;
    return 0;
}