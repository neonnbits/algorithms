#include <iostream>
#include <vector>
using namespace std;

int main(){
    int colors;
    cin >> colors;

    vector<char> seq(colors);

    for(auto &a: seq){
        cin >> a;
    }

    int remove = 0;
    for(int i=0; i< seq.size(); i++){
        if(seq[i] == seq[i+1]){
            remove++;
        }
    }

    cout<<remove<<endl;
}