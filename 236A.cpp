#include <set>
#include <iostream>
using namespace std;
int main(){
    string s1;
    cin >> s1;

    set<char> set;

    for(char c: s1){
        set.insert(c);
    }
    if(set.size()%2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}