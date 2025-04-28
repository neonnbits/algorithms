#include <iostream>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int prev = 0;
        for(int i=0; i<n; i++){
           cin>>arr[i];
        }
        for(int i=0; i<n-1; i++){

            if(arr[i] != arr[i+1]){
                if(i == 0){
                    if(arr[i] != arr[i+2]){
                        cout<< i+1 << endl;
                    }
                    else{
                        cout<< i+2 << endl;
                    }
                    break;
                }
                else{
                    if(arr[i] != arr[i-1]){
                        cout<< i+1 << endl;
                    }
                    else{
                        cout<< i+2 << endl;
                    }
                    break;
                }
            }
        }
    }
}
