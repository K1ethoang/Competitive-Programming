#include <bits/stdc++.h>
using namespace std;
/*
    Link problem: https://cses.fi/problemset/task/1094
    Completion time: 2023-04-24 13:40:43
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<long long> v(n);

    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            res += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << res;
    return 0;
}