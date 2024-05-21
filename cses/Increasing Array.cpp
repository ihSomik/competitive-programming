// Increasing Array
// https://cses.fi/problemset/task/1094/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long moves(0);
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            moves += a[i - 1] - a[i];
            a[i] += a[i - 1] - a[i];
        }
    }

    cout << moves << endl;
    return 0;
}