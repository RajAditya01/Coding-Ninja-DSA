#include <iostream>
using namespace std;

int main() {
	int i = 65;
	char c = i;// type casting int to char
	cout << c << endl;// will print 'A'

	int * p = &i; //initilizing
	char * fr = (char*)p; //type casting char to int 

	cout << p << endl;
	cout << fr << endl;

	cout << *p << endl;
	cout << *fr << endl;
	cout << *(fr + 1) << endl;
	cout << *(fr + 2) << endl;
	cout << *(fr + 3) << endl;
}
