#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using ll = long long;

using namespace std;
int main() {
    ios::sync_with_stdio(false); // Disable sync between C and C++ I/O
    cin.tie(0);                  // Disable automatic flush of cout before cin

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        map<ll, ll> freq_map;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq_map[arr[i]]++;
        }

        // find the majority element
        ll h = 0;
        for (auto &e : freq_map) {
            h = max(h, e.second);
        }

        int ops = 0;
        while (h < n) {
            int swaps = min(n - h, h); // the number of swaps must be less than
            ops += 1 + swaps;          // count the cloning and swap operations
            h += swaps;                // double the available elements count
        }

        cout << ops << endl;
    }
}