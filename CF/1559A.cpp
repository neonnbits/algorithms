#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << a[0] << "\n";
        } else {
            int result = a[0];
            for (int i = 1; i < n; i++) {
                result = result & a[i];
            }
            cout << result << "\n";
        }
    }

    return 0;
}