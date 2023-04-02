#include <iostream>

using namespace std;

bool is_prime(int num, int div = 2) {
    if (num < 2) {
        return false;
    }
    if (div * div > num) {
        return true;
    }
    if (num % div == 0) {
        return false;
    }
    return is_prime(num, div + 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (is_prime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
