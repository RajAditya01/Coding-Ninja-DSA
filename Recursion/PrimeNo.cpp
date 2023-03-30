#include<iostream>
using namespace std;

int main(){

    int i,count =0, j;
    cout<<"enter the number:"<<endl;
    cin>>i;
    j=1;

    while(j<=i){
        if(i%j==0){
            count ++;
        }
        j++;
    }
    return 0;
}