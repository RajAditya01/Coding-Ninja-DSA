#include<iostream>
using namespace std;

template<class x>
x greater(x a, x b){
    if (a>b){
        return a;
    }

    else{
        return b;
    }
};

int main(){
    cout<<greater(5,9);
}
