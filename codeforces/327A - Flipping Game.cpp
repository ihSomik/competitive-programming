// flipping game
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int n,
    a, count1(0), extra0(0), extra0max(-1);
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            count1++;
            if (extra0 > 0)
                extra0--;
        }
        else
        {
            extra0++;
            ;
            if (extra0 > extra0max)
                extra0max = extra0;
        }
    }
    cout << count1 + extra0max << endl;

    return 0;
}