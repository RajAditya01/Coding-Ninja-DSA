#include <iostream>
using namespace std;

int sum(int input[], int n) {

    if(n==1){
        return input[0];
    }
    
    return input[0]+sum(input+1,n-1); 
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sum(arr, n) << endl;
    return 0;
}
