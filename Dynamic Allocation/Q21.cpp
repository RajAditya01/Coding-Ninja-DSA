#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a*b

int main(){
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
/*
The macro definition uses simple text replacement to create the code that will be executed. Specifically, it replaces the macro name with the text passed as arguments, which results in the following code:

cout << 2+3*3+5;

This is equivalent to:

cout << (2 + (3*3) + 5);
*/