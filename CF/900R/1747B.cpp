#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
            continue;
        }

        int start = 1;
        int end = 3 * n;
        int count = (n + 1) / 2;
        cout << count << endl;
        while (start < end) {
            cout << start << " " << end << endl;
            start += 3;
            end -= 3;
        }
    }
}