#include <iostream>
#include <vector>

int main(){
    int l;
    std::cin>>l;

    std::vector<int> arr(l, 0);
    int p;

    std::cin>>p;
    while(p--){
        int e;
        std::cin >> e;
        arr[e-1] = 1;
    }

    std::cin>>p;
    while(p--){
        int e;
        std::cin >> e;
        arr[e-1] = 1;
    }

    for(auto &e: arr){
        if(!e){
            std::cout<<"Oh, my keyboard!"<<std::endl;
            return 0;
        }
    }
    std::cout<<"I become the guy."<<std::endl;
    return 0;
}