#include <iostream>
using namespace std;

void setIO(std::string name){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main(){
    setIO("shuffle");
    int n;
    cin >> n;

    int order[n];
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        order[i] = temp-1;
    }

    int origorder[n];
    for (int i = 0; i < n; i++) {
        cin >> origorder[i];
    }
    
    for (size_t j = 0; j < 3; j++)
    {
        int temp[n];
        for(int i=0; i<n; i++){
            temp[i] = origorder[order[i]];
        }
        for(int i=0; i<n; i++){
            origorder[i] = temp[i];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        cout<<origorder[i]<<endl;
    }
    
}