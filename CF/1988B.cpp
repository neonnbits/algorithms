#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ones = 0, zeroes = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == '1') {
                ones++;
                i++;
            } else {
                while (s[i] == '0') {
                    i++;
                }
                zeroes++;
            }
        }

        if (zeroes >= ones)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}