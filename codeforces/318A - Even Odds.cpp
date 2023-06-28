#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2)          // there are always (n+1)/2 odd numbers in n natural numbers from 1 to n
        cout << 2 * k - 1 << endl; // n th odd number
    else
        cout << (k - (n + 1) / 2) * 2 << endl;
    /*
    1 2 3 4 5 6 7
    1 3 5 7 2 4 6
    here 6th term is = (6 - ((7 + 1) / 2)) * 2 = 4
    (2 * k - (n + 1)) will not be worked for the test case "8 5"
    */
    return 0;
}