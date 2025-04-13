#include <iostream>
#include <algorithm>

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
    int arr[n][3];
    //store the cases
    for(int i=0; i< n; i++){
        int a,b,g;
        std::cin>>a>>b>>g;
        arr[i][0] = a;
        arr[i][1] = b;
        arr[i][2] = g;
    }
    
    //simulate three possibilites
    for(int i=1; i<= 3; i++){
        int peb[4]{};
        peb[i] = 1;
         int maxG=0;
        for (int j = 0; j < n; j++)
        {
            swap(peb, arr[j][0], arr[j][1]);
            if(peb[arr[j][2]] == 1){
                maxG++;
                maxCG = std::max(maxCG, maxG);
            }
        }
    }
    std::cout<<maxCG<<std::endl;
}