#include <iostream>
#define MAX_SIZE 1000
void setIO(std::string name){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

//sweep method
int main(){
    setIO("blist");

    std::vector<int> arr(MAX_SIZE+1);
    int n;
    std::cin>>n;

    while(n--){
        int s,t,b;
        std::cin>>s>>t>>b;

        arr[s] += b;
        arr[t] -= b;
    }

    int total = 0;
    int current = 0;
    for(int i=0; i<MAX_SIZE; i++){
        current += arr[i];
        total = std::max(current, total);
    }

    std::cout<<total<<std::endl;
}