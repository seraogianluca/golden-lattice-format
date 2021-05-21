#include <iostream>
#include <cmath>

using namespace std;

const double phi = (sqrt(5) + 1) / 2;

class goldice {
    private:
        int8_t a;
        int8_t b;
        bool complexInfinity;
        bool indeterminate;
    public:
        goldice() {
            complexInfinity = false;
            indeterminate = false;
        };
        goldice(int8_t a, int8_t b) {
            this->a = a;
            this->b = b;
            complexInfinity = false;
            indeterminate = false;
        };
        // ~GoldenRatio();
        goldice operator+(const goldice other);
        goldice operator-(const goldice other);
        goldice operator*(const goldice other);
        goldice operator/(goldice other);
        goldice reciprocal();
        double toDouble();
        friend ostream& operator<<(ostream& out, const goldice& other);
        // GoldenRatio operator=(const GoldenRatio& other);
        // GoldenRatio operator=(const int other);
};

// TODO:
// cambiare i tipi
// come rappresentare inf ind 0 e numero normale
// template
// controllare + -
// costruttore per la conversione 
// covnvertitore per il cout (GR -> float)
// modificare costruttore con argomenti
// implementare operatori == != > < 