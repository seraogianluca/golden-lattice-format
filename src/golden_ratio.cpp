#include "include/golden_ratio.hpp"

GoldenRatio GoldenRatio::operator+(const GoldenRatio other) {
    GoldenRatio z;
    z.a = a + other.a;
    z.b = b + other.b;
    return z;
}

ostream& operator<<(ostream& out, const GoldenRatio& other) {
    return out << other.a << '/' << other.b;
}