#include <cmath>
#include <iostream>
#include <string>
#include <vector>
const int INF = 1e9;
using namespace std;

int solve(string s) {
    int removals = 0;
    int i = 0;

    while (i <= s.length()) {
        if (i <= s.length() - 5 && s.substr(i, 5) == "mapie") {
            removals++;
            i += 5;
        } else if (s.substr(i, 3) == "map") {
            removals++;
            i += 3;
        } else if (s.substr(i, 3) == "pie") {
            removals++;
            i += 3;
        } else {
            i++;
        }
    }

    return removals;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // cout << solve(s) << endl;

        // another way to solve this
        vector<int> va;

        for (string sul : {"mapie", "pie", "map"}) {
            for (size_t pos = 0; (pos = s.find(sul, pos)) != string::npos;
                 pos += sul.length()) {
                s[pos + sul.length() / 2] = '?';
                va.push_back(pos + sul.length() / 2);
            }
        }

        cout << va.size() << "\n";
    }
    return 0;
}