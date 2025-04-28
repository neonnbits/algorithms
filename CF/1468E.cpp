#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); // Disable sync between C and C++ I/O
    cin.tie(0); // Disable automatic flush of cout before cin

    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int n = sizeof(arr)/sizeof(arr[0]);
        sort(arr, arr+n);
        int b = min(arr[0], arr[1]);
        int l = min(arr[2], arr[3]);
        cout<< b*l <<endl;
    }
}