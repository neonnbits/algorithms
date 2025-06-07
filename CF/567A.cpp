#include <algorithm>
#include <iostream>
#include <vector>

#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int MOD = 1e9 + 7;

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cities(n);

    for (int i = 0; i < n; i++) {
        cin >> cities[i];
    }

    vector<int> minVal(n);
    vector<int> maxVal(n);

    for (int i = 1; i < n - 1; i++) {
        int idx = cities[i];
        minVal[i] = min(abs(idx - cities[i - 1]), abs(idx - cities[i + 1]));
        maxVal[i] = max(abs(idx - cities[0]), abs(idx - cities[n - 1]));
    }

    minVal[0] = abs(cities[1] - cities[0]);
    maxVal[0] = abs(cities[n - 1] - cities[0]);

    minVal[n - 1] = abs(cities[n - 2] - cities[n - 1]);
    maxVal[n - 1] = abs(cities[n - 1] - cities[0]);

    for (int i = 0; i < n; i++) {
        cout << minVal[i] << " " << maxVal[i] << endl;
    }

    return 0;
}