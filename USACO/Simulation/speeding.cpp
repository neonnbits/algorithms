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
    setIO("speeding");

    int n, m;
    cin >> n >> m;

    int limit[100], bessie[100];

    int pos =0;
    for(int i=0; i<n; i++){
        int d, s;
        cin>>d>>s;
        for(int j=0; j<d; j++){
            limit[pos++] = s;
        }
    }

    pos =0;
    for(int i=0; i<m; i++){
        int d, s;
        cin>>d>>s;
        for(int j=0; j<d; j++){
            bessie[pos++] = s;
        }
    }

    int overspeed =0;

    for(int i=0; i<100; i++){
        overspeed = max(overspeed, bessie[i] - limit[i]);
    }

    cout<<overspeed;
}