#include <iostream>
using namespace std;

int countDigit(int n){
    //base case
    if(n==0){
        return 0;
    }

    return 1+countDigit(n/10);
}

int main() {
	int n;
    cout<<"Enter the digit:"<<" ";
	cin >> n;
	int output = countDigit(n);
	cout << output << endl;
}

