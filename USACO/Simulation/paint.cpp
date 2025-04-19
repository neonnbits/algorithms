#include <iostream>

int main(){
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int units;

    int interval_start = std::min(a,c);
    int interval_end = std::max(b,d);
    int overlap_start = std::max(a,c);
    int overlap_end = std::min(b,d);
    int total_overlap = std::max(0, overlap_end-overlap_start);
    units = (b-a)+(d-c) - total_overlap;
    std::cout<<units;
}