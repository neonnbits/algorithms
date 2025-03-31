#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin>> s1 >> s2;

    int index=-1;
    int i = s1.length();
    while(index++ < i){
        if(tolower(s1[index]) == tolower(s2[index])) continue;
        else if(tolower(s1[index]) > tolower(s2[index])){
            cout << 1 << endl;
            return 0;
        }
        else {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}