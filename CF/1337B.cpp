#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;

        if (x < 20) {
            if (x - (m * 10) <= 0) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        } else {
            while (x > 20 && n > 0) {
                x = (x / 2) + 10;
                n--;
            }
            if (x - (m * 10) <= 0) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }
}