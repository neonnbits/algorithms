#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int maxLen = 1;
        int len = 1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] <= k) {
                len += 1;
                maxLen = max(maxLen, len);
            } else {
                len = 1;
            }
        }
        cout << "\n answer: " << n - maxLen << endl;
    }
}