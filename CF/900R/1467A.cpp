#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = "989";
        if (n <= 3) {
            cout << s.substr(0, n) << "\n", 0;
            continue;
        }
        int i = 4;
        int num = 0;
        while (i <= n) {
            s += to_string(num);
            num = (num + 1) % 10;
            i++;
        }

        cout << s << " " << endl;
    }
}