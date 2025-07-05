#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();
    int count=0;
    for(char c: s){
        if(islower(c)) count++;
    }
    if(count >= len-count){
        for(char c: s){
            cout << static_cast<char>(tolower(c));
        }
    }
    else{
        for(char c: s){
            cout << static_cast<char>(toupper(c));
        }
    }
    cout<<endl;
}