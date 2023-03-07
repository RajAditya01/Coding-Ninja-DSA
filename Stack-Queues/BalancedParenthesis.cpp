#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_balanced(string expression) {
    stack<char> s;
    for (char c : expression) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string expression1 = "{ a + [ b+ (c + d)] + (e + f) }";
    string expression2 = "{ a + [ b - c } ]";
    cout << boolalpha << is_balanced(expression1) << endl; // true
    cout << boolalpha << is_balanced(expression2) << endl; // false
    return 0;
}
