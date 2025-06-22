#include <iostream>
#include <math.h>
#include <vector>
typedef long long ll;

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, sum = 0;
        cin >> n;
        int x;
        int zeroes = 0, ones = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 0)
                zeroes++;
            else if (x == 1)
                ones++;
        }
        cout << (1ll << zeroes) * (ll)ones << "\n";
    }
}
