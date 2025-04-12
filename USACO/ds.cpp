#include<iostream>

int main(){
    int arr[25];
    std::fill(arr, arr+25, 1);
    for(int i=0; i<25; i++){
        std::cout<<arr[i]<<std::endl;
    }

    //vector
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        std::cout<<"v "<<*it<<std::endl;
    }

    v.erase(v.end()-1);

    for(auto element: v){
        std::cout<<"v2 "<<element<<std::endl;
    }
}