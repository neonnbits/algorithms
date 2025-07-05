#include <cmath>
#include <iostream>
#include <string>
#include <vector>
const int INF = 1e9;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        int i = 0;
        while (i < n) {
            cin >> arr[i];
            i++;
        }

        // find how many rows contain #
        int countRowsWithHash = 0;
        int startRow = 0, endRow = 0;

        for (int i = 0; i < n; i++) {
            string s = arr[i];
            if (s.find("#") != string::npos) {
                if (countRowsWithHash == 0) {
                    startRow = i;
                }
                countRowsWithHash++;
                endRow = i;
            }
        }

        // now we know the start and end row so we can calculate the middle row
        // containing the "#"
        int middleRow = (endRow + startRow) / 2;
        int numberOfHashes = (((countRowsWithHash / 2) + 1) * 2) - 1;
        int midHash = (numberOfHashes / 2) + 1;

        // cout << "rows with hash: " << countRowsWithHash
        //      << " middleRow: " << middleRow
        //      << " numberofhashes: " << numberOfHashes << " midhash " <<
        //      midHash
        //      << endl;

        int xIndex = middleRow;
        int yIndex = 0;

        string str = arr[xIndex];
        i = 0;
        while (midHash) {
            if (str[i] == '#') {
                midHash--;
                yIndex = i;
            }
            i++;
        }

        // alternate method using the observation that the top most and bottom
        // most row with hash will have count equal to 1 always

        pair<int, int> top = {INF, INF}, bottom = {-INF, -INF};
        // but we need to have stored each row as vector of characters inside a
        // vector and we need to find the top and bottom

        cout << xIndex + 1 << " " << yIndex + 1 << "\n";
    }
}