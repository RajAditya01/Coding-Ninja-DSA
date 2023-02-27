#include <iostream>
#include <cstring>

using namespace std;

class Polynomial {
private:
    int *coefficients;
    int size;

public:
    Polynomial(int size=10) {
        this->size = size;
        coefficients = new int[size];
        memset(coefficients, 0, sizeof(int) * size);
    }

    Polynomial(const Polynomial& p) {
        size = p.size;
        coefficients = new int[size];
        memcpy(coefficients, p.coefficients, sizeof(int) * size);
    }

    void setCoefficient(int degree, int coefficient) {
        if (degree >= size) {
            int *newCoefficients = new int[degree + 1];
            memcpy(newCoefficients, coefficients, sizeof(int) * size);
            delete[] coefficients;
            coefficients = newCoefficients;
            size = degree + 1;
        }
        coefficients[degree] = coefficient;
    }

    Polynomial operator+(const Polynomial& p) const {
        Polynomial result(max(size, p.size));
        for (int i = 0; i < result.size; i++) {
            if (i < size && i < p.size) {
                result.coefficients[i] = coefficients[i] + p.coefficients[i];
            } else if (i < size) {
                result.coefficients[i] = coefficients[i];
            } else {
                result.coefficients[i] = p.coefficients[i];
            }
        }
        return result;
    }

    Polynomial operator-(const Polynomial& p) const {
        Polynomial result(max(size, p.size));
        for (int i = 0; i < result.size; i++) {
            if (i < size && i < p.size) {
                result.coefficients[i] = coefficients[i] - p.coefficients[i];
            } else if (i < size) {
                result.coefficients[i] = coefficients[i];
            } else {
                result.coefficients[i] = -p.coefficients[i];
            }
        }
        return result;
    }

    Polynomial operator*(const Polynomial& p) const {
        Polynomial result(size + p.size - 1);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < p.size; j++) {
                result.coefficients[i + j] += coefficients[i] * p.coefficients[j];
            }
        }
        return result;
    }

    void operator=(const Polynomial& p) {
        if (coefficients != nullptr) {
            delete[] coefficients;
        }
        size = p.size;
        coefficients = new int[size];
        memcpy(coefficients, p.coefficients, sizeof(int) * size);
    }

    void print() const {
        for (int i = 0; i < size; i++) {
            if (coefficients[i] != 0) {
                cout << coefficients[i] << "x" << i << " ";
            }
        }
        cout << endl;
    }

    ~Polynomial() {
        if (coefficients != nullptr) {
            delete[] coefficients;
        }
    }
};
