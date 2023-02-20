#include<iostream>
using namespace std;

int sum(int a[],int size, int start=0){
    int ans=0;
    for(int i=start; i<size; i++){
        ans+=a[i];
    }
    return ans;
}

int main(){
    int a[5]={5,4,3,2,1};
    cout<<sum(a,5)<<endl;

    return 0;
}