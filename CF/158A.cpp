#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, c=0;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    for(int i=0; i<n; i++)
        if(a[i] >= a[k-1] && a[i] > 0) c++;
    cout << c;
}