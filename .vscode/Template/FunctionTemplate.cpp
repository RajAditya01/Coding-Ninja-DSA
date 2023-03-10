#include <iostream>
#include <functional>
using namespace std;

template<class x>
x my_greater(x a, x b){
    if (a > b){
        return a;
    } else{
        return b;
    }
}

int main(){
    cout << my_greater(5, 9) << endl;
    cout << my_greater(2.2,5.2)<< endl;
    return 0;
}
