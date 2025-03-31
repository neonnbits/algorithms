#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    int count = 0;
    while(t--){
        string str;
        getline(cin, str);
        if(str[1] == '+') count++;
        else count--;
    }
    cout<<count<<endl;
}