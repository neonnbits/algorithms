#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // Disable sync between C and C++ I/O
    cin.tie(0);                  // Disable automatic flush of cout before cin

    int n;
    cin >> n;
    vector<int> v(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (size_t i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}