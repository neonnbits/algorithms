#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); // Disable sync between C and C++ I/O
    cin.tie(0); // Disable automatic flush of cout before cin

    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        int n;
        cin >> n;
        cin >> s;
        size_t i=1;
        int flag = 1;
        while(i<s.length()){
            if(i+1 < s.length()){
                if(s[i] != s[i+1]){
                    flag = 0;
                    break;
                }
                
            }
            else{
                flag = 0;
                break;
            }
            i+=3;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}