#include <iostream>
#include <cstring>
using namespace std;

class Student {
    int age;
    char *name;

public:
    Student(int age, const char *name) {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strncpy(this->name, name, strlen(name) + 1);
    }

    ~Student() {
        delete[] name;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    const char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    const char name2[] = "efgh";
    Student s2(24, name2);
    s2.display();

    s1.display();

    return 0;
}
