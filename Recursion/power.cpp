#include<iostream>
using namespace std;

int power(int n,int m){
    //base case
    if(m==0){
        return 1;
    }

    //induction hypothesis
    return n*power(n,m-1);
}

int main(){
    cout<<power(2,5)<<endl;


    return 0;
    
}