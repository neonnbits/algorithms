#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        short n;
        cin >> n;

        // elimination
        if (n > 45) {
            cout << -1 << endl;
            continue;
        }

        // answer definitely exists so just find it!
        string result = "";
        for (int i = 9; i >= 1; i--) {
            if (n >= i) {
                result = to_string(i) + result;
                n -= i;
            }
        }

        cout << result << endl;
    }
    return 0;
}