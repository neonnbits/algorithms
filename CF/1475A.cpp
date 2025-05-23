#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        while (n % 2 == 0) {
            n = n / 2;
        }

        if (n > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}