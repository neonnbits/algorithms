#include <iostream>

void setIO(std::string name){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main(){
    setIO("cowsignal");

    int m,n,k;
    std::cin>>m>>n>>k;
    for(int i=0; i<m; i++){
        std::string line;
        std::cin>>line;

       //each character is repeated k times
       std::string scaled_line = "";
       for(char ch : line){
        scaled_line += std::string(k, ch);
       }

       //print it k times vertically
       for(int j=0; j < k; j++){
        std::cout<<scaled_line<<"\n";
       }
    }
}