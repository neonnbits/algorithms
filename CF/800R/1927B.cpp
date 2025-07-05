#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int i = 0;
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }

        map<char, int> charCount;

        i = 0;
        char c = 'a';
        string s = "";
        while (i < n) {
            if (arr[i] == 0) {
                s += c;
                charCount[c]++;
                c++;
            } else {
                for (auto &pair : charCount) {
                    if (pair.second == arr[i]) {
                        s += pair.first;
                        charCount[pair.first]++;
                        break;
                    }
                }
            }
            i++;
        }
        cout << s << endl;
    }
}
