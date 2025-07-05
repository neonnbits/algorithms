#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int findDepth(vector<int> &emp, int idx) {
    if (emp[idx] == -1) {
        return 1;
    }
    return 1 + findDepth(emp, emp[idx] - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> emp(n);
    for (int i = 0; i < n; i++) {
        cin >> emp[i];
    }

    int maxDepth = 0;
    // recursive approach
    //  for (int i = 0; i < n; i++) {

    //     maxDepth = max(maxDepth, depth(emp, i));
    // }

    vector<vector<int>> children(n);
    for (int i = 0; i < n; i++) {
        if (emp[i] != -1) {
            children[emp[i] - 1].push_back(i);
        }
    }

    for (int i = 0; i < n; i++) {
        if (emp[i] == -1) {
            queue<int> q;
            q.push(i);
            int depth = 1;

            while (!q.empty()) {
                int levelSize = q.size();
                for (int i = 0; i < levelSize; i++) {
                    int emp = q.front();
                    q.pop();
                    for (int child : children[emp]) {
                        q.push(child);
                    }
                }
                maxDepth = max(maxDepth, depth);
                depth++;
            }
        }
    }

    cout << maxDepth << "\n";
    return 0;
}