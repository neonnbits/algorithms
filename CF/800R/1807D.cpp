#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> arr(n);
        vector<int> prefix(n + 1);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            prefix[i] = sum;
            sum += arr[i];
        }
        prefix[n] = sum;
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            int total = sum - (prefix[r] - prefix[l - 1]) + (k * (r - l + 1));

            if (total % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}