#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s1;
    cin >> s1;
    if(s1.length() == 1){
        cout << s1<< endl;
        return 0;
    }
    int i = 0;
    vector<int> v;
    while(i < s1.length()){
        v.push_back((int)s1[i] - 48);
        i+=2;
    }
    sort(v.begin(), v.end());

    for (size_t i = 0; i < v.size() - 1; ++i) {
        cout << v[i] << "+";
    }
    cout<<v[v.size()-1]<<endl;
}