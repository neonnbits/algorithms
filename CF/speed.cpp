#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main() {
    int n = 1000000; // 1 million numbers
    vector<int> a(n);

    // ===========================================
    // Uncomment the next two lines to enable fast I/O:
    ios::sync_with_stdio(false); // Disable sync between C and C++ I/O
    cin.tie(0); // Disable automatic flush of cout before cin
    // ===========================================

    auto start = high_resolution_clock::now(); // Start timing

    // Read input
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Do something simple (like calculate sum)
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum << '\n'; // Only print the final answer

    auto stop = high_resolution_clock::now(); // End timing

    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time taken: " << duration.count() << " ms" << endl;

    return 0;
}