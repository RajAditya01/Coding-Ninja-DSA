#include<iostream>
using namespace std;

int main(){


//Pointer Arthemetaic

    int i=10;
    int *p=&i;

    cout<<p<<endl;
    p=p+2;
    cout<<p<<endl;

    cout<<p<<endl;
    p=p-2;
    cout<<p<<endl;

    double d=102.3;
    double *db=&d;
    cout<< db<< endl;



    return 0;
}