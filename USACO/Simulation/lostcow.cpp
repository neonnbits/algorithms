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
    setIO("lostcow");
    int x, y;
    cin >> x >> y;

    int pos = x;
    int factor = 1;
    int distance = 0;
    while(true){
        int next_pos = x + factor;
        if(y >= min(pos, next_pos) && y <= max(pos, next_pos)){
            distance += abs(y-pos);
            break;
        }
        else{
            distance += abs(next_pos - pos);
        }

        pos = next_pos;
        factor *= -2;
    }
    cout << distance;
}