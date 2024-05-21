// https://dimikoj.com/problems/49/is-prime
// rte
#include <bits/stdc++.h>
using namespace std;

const int n = 10000;
bool isPrime[n + 1];

void sieveOfEratosthenes()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++)
        isPrime[i] = true;

    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
}

int main()
{
    sieveOfEratosthenes();
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (isPrime[n])
            cout << n << " is a prime" << endl;
        else
            cout << n << " is not a prime" << endl;
    }

    return 0;
}
