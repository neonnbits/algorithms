#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); // Disable sync between C and C++ I/O
    cin.tie(0); // Disable automatic flush of cout before cin

    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        istringstream iss(str);
        string temp, word;
        while(iss >> temp){
            word += temp[0];
        }
        cout<<word<<endl;
    }
    return 0;
}