#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << n * (n - 1) / 2 << endl;  // number of handshakes = nC2
    }
}
