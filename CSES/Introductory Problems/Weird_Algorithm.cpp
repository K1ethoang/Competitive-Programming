#include <bits/stdc++.h>
using namespace std;
/*
    Link problem: https://cses.fi/problemset/task/1068
    Completion time: 2023-04-21 23:33:32
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    cin >> n;
    cout << n << ' ';
    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
        cout << n << " ";
    }
    return 0;
}