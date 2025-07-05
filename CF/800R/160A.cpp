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
    vector<int> arr(n);
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end(), std::greater<int>());

    int count = 0;
    int gain = 0;
    while (gain <= sum / 2)
    {
        gain += arr[count];
        count++;
    }

    cout << count << endl;
    return 0;
}