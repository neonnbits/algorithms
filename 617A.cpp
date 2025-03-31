#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    int count = a/5;
    if(a%5 > 0) count++;
    cout << (count) << endl;
}