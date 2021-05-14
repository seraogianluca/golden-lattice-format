#include <iostream>

using namespace std;

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
        //~GoldenRatio();
        GoldenRatio operator+(const GoldenRatio other);
        //GoldenRatio operator-(const GoldenRatio other);
        friend ostream& operator<<(ostream& out, const GoldenRatio& other);
        // GoldenRatio operator=(const GoldenRatio& other);
        // GoldenRatio operator=(const int other);
};
