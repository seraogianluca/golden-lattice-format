#include "include/golden_ratio.hpp"

goldice goldice::operator+(const goldice other) {
    goldice z;
    z.a = a + other.a;
    z.b = b + other.b;
    return z;
}

goldice goldice::operator-(const goldice other) {
    goldice z;
    z.a = a - other.a;
    z.b = b - other.b;
    return z;
}

goldice goldice::operator*(const goldice other) {
    // Can be optimized
    goldice z;
    if ((complexInfinity && other.a == 0 && other.b == 0) || (a == 0 && b == 0 && other.complexInfinity)) {
        z.indeterminate = true;
        z.complexInfinity = false;
        return z;
    }
    if (complexInfinity || other.complexInfinity) {
        z.complexInfinity = true;
        z.indeterminate = false;
        return z;
    }
    z.a = a * other.a + b * other.b;
    z.b = a * other.b + b * other.a + b * other.b;
    return z;
}

goldice goldice::reciprocal() {
    goldice z;
    if (complexInfinity) {
        z.a = 0;
        z.b = 0;
        return z;
    }
    if (a == 0 && b == 0) {
        z.complexInfinity = true;
        z.indeterminate = false;
        return z;
    }
    z.a = (a + b)/((a^2)+(a*b)-(b^2));
    z.b = -b/((a^2)+(a*b)-(b^2));
    return z;
}

goldice goldice::operator/(goldice other) {
    goldice z;
    z = this->operator*(other.reciprocal());
    return z;
}

double goldice::toDouble() {
    return a + (b*phi);
}

ostream& operator<<(ostream& out, const goldice& other) {
    return out << static_cast<int>(other.a) << " + phi(" << static_cast<int>(other.b) << ")";
}