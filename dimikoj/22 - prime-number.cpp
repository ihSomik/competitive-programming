// https://dimikoj.com/problems/22/prime-number

#include <bits/stdc++.h>
using namespace std;

int n = 100000;

int sieveOfEratosthenes(int a, int b)
{
    bool isPrime[n + 1];
    for (int i = 2; i <= n; i++)
        isPrime[i] = true;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
    int count(0);
    for (int i = a; i <= b; i++)
        if (isPrime[i])
            count++;

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << sieveOfEratosthenes(a, b) << endl;
    }

    return 0;
}
