#include <iostream>

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main(){
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n;
    std::cin>>n;
    int maxCG = 0;
    int arr[3]{};
    for(int i=0; i<3; i++){
        arr[i] = 1;
        if(i != 0) arr[i-1] = 0;
        while(n--){
            int a,b,g;    
            std::cin>>a,b,g;
            sw
        }
    }
}