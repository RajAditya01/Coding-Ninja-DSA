#include<iostream>
using namespace  std;

int main(){
    int a[10];
    cout<< a <<endl;
    cout<< &a[0] <<endl;

    a[0] =5;
    a[1]=20;

    cout<< *a <<endl;
    cout<< *(a+1) <<endl;
}