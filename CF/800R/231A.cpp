#include <iostream>

int main(){
    int t;
    std::cin>>t;

    int count = 0;
    while(t--){
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a+b+c > 1) count++; 
    }
    std::cout<< count<<std::endl;
}