#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    while(k--){
        if(n%10 != 0){
            n--;
        }
        else n = n/10;
    }

    cout << n << endl;
}