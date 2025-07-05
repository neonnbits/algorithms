#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    auto s = std::to_string(n);
    int i = 0, j = 1;
    while (i < s.length()) {
        if (i + 3 < s.length() && s.substr(i, 3) == "144")
            i += 3;
        else if (i + 2 < s.length() && s.substr(i, 2) == "14")
            i += 2;
        else if (s[i] == '1')
            i += 1;
        else
            cout << "NO" << endl;
    }
    cout << "YES" << endl;
}