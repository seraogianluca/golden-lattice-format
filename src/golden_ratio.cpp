#include "include/golden_ratio.hpp"

GoldenRatio GoldenRatio::operator+(const GoldenRatio other) {
    GoldenRatio z;
    z.a = a + other.a;
    z.b = b + other.b;
    return z;
}

GoldenRatio GoldenRatio::operator-(const GoldenRatio other) {
    GoldenRatio z;
    z.a = a - other.a;
    z.b = b - other.b;
    return z;
}

GoldenRatio GoldenRatio::operator*(const GoldenRatio other) {
    // Can be optimized
    GoldenRatio z;
    if ((a == COMPLEX_INFINITY && b == COMPLEX_INFINITY &&
    other.a == 0 && other.b = 0) || (a == 0 && b == 0 && 
    other.a == COMPLEX_INFINITY && other.b == COMPLEX_INFINITY)) {
        z.a = INDETERMINATE;
        z.b = INDETERMINATE;
        return z;
    }
    if ((a == COMPLEX_INFINITY && b = COMPLEX_INFINITY) ||
    other.a == COMPLEX_INFINITY && other.b = COMPLEX_INFINITY) {
        z.a = COMPLEX_INFINITY;
        z.b = COMPLEX_INFINITY;
        return z;
    }
    z.a = a * other.a + b * other.b;
    z.b = a * other.b + b * other.a + b * other.b;
    return z;
}

GoldenRatio reciprocal() {
    GoldenRatio z;
    if (a == COMPLEX_INFINITY && b == COMPLEX_INFINITY) {
        z.a = 0;
        z.b = 0;
        return z;
    }
    if (a == 0 && b == 0) {
        z.a = COMPLEX_INFINITY;
        z.b = COMPLEX_INFINITY;
        return z;
    }
    z.a = (a + b)/(a^2 + a*b-b^2);
    z.b = -b/(a^2 + a*b-b^2);
    return z;
}

GoldenRatio GoldenRatio::operator/(const GoldenRatio other) {
    GoldenRatio z;
    return z = this * other.reciprocal();
}

ostream& operator<<(ostream& out, const GoldenRatio& other) {
    return out << other.a << " - " << other.b;
}