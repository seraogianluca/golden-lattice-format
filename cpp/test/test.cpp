#include <iostream>
#include "include/golden_ratio.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    goldice g1(1, 1);
    goldice g2(-1, -1);
    cout << "First goldice: " << g1 << endl;
    cout << "Second goldice: " << g2 << endl;
    goldice gsum = g1 + g2;
    goldice gdiff = g1 - g2;
    goldice gprod = g1 * g2;
    goldice gfrac = g1/g2;
    cout << "Sum: " << gsum << endl;
    cout << "Difference: " << gdiff << endl;
    cout << "Product: " << gprod << endl;
    cout << "Reciprocal: " << g1.reciprocal() << endl;
    cout << "Reciprocal: " << g2.reciprocal() << endl;
    cout << "Fraction: " << gfrac << endl;

    cout << "Double value: " << g1.toDouble() << endl;
    cout << "Double value: " << g2.toDouble() << endl;
    return 0;
}
