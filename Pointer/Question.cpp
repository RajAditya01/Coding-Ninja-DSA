#include<iostream>
using namespace  std;

int main(){
    int a[5];
    int *c;
    cout << sizeof(a) << " " << sizeof(c)<<endl;  

    //q18
    int b[] = {1, 2, 3, 4};
    cout << *(b) << " " << *(b+1)<<endl;
  
}