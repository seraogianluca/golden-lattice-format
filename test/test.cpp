#include <iostream>
#include "include/golden_ratio.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    GoldenRatio g1(12.0, 5.9);
    GoldenRatio g2(5.2, 6.3);
    GoldenRatio g3 = g1 + g2;
    cout << g3 << endl;
    return 0;
}
