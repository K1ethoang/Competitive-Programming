#include <bits/stdc++.h>
using namespace std;
/*
    Link problem: https://cses.fi/problemset/task/1069/
    Completion time: 2023-04-24 00:14:39
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    int res = 0, sum = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            sum += 1;
        else
        {
            res = max(res, sum);
            sum = 1;
        }
    }
    res = max(res, sum);
    cout << res;

    return 0;
}