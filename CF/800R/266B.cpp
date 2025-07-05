#include <iostream>
#include <string>
#include <cctype>
int main(){
    int n, t;

    std::cin>>n>>t;
    
    std::string s;
    std::cin>>s;
    for(int i=0; i<t; i++){
        int j=0;
        while(j < n-1){
            if(s[j] == 'B' && s[j+1] == 'G'){
                s[j] = 'G';
                s[j+1] = 'B';
                j+=2;
            }
            else{
                j++;
            }
        }
    }

    std::cout<<s<<std::endl;
}