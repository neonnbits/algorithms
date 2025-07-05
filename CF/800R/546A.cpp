#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int w, n, k;

    cin>> w >> n >> k;

    int total = w * ((k*(k+1))/2);
    if(total <= n) cout << 0 << endl; 
    else cout << total-n << endl;
}