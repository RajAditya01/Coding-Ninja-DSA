#include <iostream>
using namespace std;

class ComplexNumber {
    private:
        int real, imag;
    
    public:
        ComplexNumber(int r=0, int i=0) {
            real = r;
            imag = i;
        }

        void plus(ComplexNumber c) {
            real += c.real;
            imag += c.imag;
        }

        void multiply(ComplexNumber c) {
            int temp_real = real*c.real - imag*c.imag;
            int temp_imag = real*c.imag + imag*c.real;
            real = temp_real;
            imag = temp_imag;
        }

        void print() {
            cout << real << " + i" << imag << endl;
        }
};

int main() {
    int r1, i1, r2, i2, choice;
    cin >> r1 >> i1 >> r2 >> i2 >> choice;

    ComplexNumber c1(r1, i1), c2(r2, i2);

    if (choice == 1) {
        c1.plus(c2);
    } else if (choice == 2) {
        c1.multiply(c2);
    }

    c1.print();
    c2.print();

    return 0;
}
