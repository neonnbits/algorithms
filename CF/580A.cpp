#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);

    for (size_t i = 0; i < m; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;
    for (size_t i = n - 1; i < m; i++) {
        minDiff = min(minDiff, arr[i] - arr[i - n + 1]);
    }

    cout << minDiff << endl;
}