#include <iostream>

using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a, b, c = 1;

        if (n % 2 == 0) {
            cout << 2 << " " << n - 3 << " " << 1 << endl;
        } else {
            int target = n - 1;
            for (int i = 3; i <= target / 2; i += 2) {
                a = i;
                b = target - a;
                if (gcd(a, b) == 1) {
                    cout << a << " " << b << " " << 1 << endl;
                    break;
                }
            }
        }
    }
}
