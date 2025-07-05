#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string s = "";

        for (int i = 0; i < n; i++) {
            int num = (i % b);
            char c = 'a' + num;
            s += c;
        }

        cout << s << endl;
    }
}
