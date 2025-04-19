#include<iostream>

int main(){
    int arr[3][2]{};

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    for (int i = 0; i < 3; i++) {
        std::cin >> arr[i][0] >> arr[i][1];
    }

    //simulation
    int n = 100;
    int current = 0;
    while(n--){
        int source = current;
        int target = (current+1)%3;
        int canBePoured = std::min(arr[source][1], arr[target][0] - arr[target][1]);
        arr[source][1] -= canBePoured;
        arr[target][1] += canBePoured;
        current = target;
    }

    for (int i = 0; i < 3; i++) {
        std::cout << arr[i][1]<<std::endl;
    }
}