#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<int>s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    s1.pop();
    cout<<s1.empty()<<endl;
}