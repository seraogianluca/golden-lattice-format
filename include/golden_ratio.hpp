#include <iostream>

using namespace std;

#define COMPLEX_INFINITY INFINITY;
#define INDETERMINATE std::nanf;

class GoldenRatio {
    private:
        float a;
        float b;

    public:
        GoldenRatio() {};
        GoldenRatio(float a, float b) {
            this->a = a;
            this->b = b;
        };
        // ~GoldenRatio();
        GoldenRatio operator+(const GoldenRatio other);
        GoldenRatio operator-(const GoldenRatio other);
        GoldenRatio operator*(const GoldenRatio other);
        GoldenRatio operator/(const GoldenRatio other);
        GoldenRatio reciprocal();
        friend ostream& operator<<(ostream& out, const GoldenRatio& other);
        // GoldenRatio operator=(const GoldenRatio& other);
        // GoldenRatio operator=(const int other);
};
