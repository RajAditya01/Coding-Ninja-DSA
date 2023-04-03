#include <iostream>
using namespace std;

int sum_array(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return arr[n-1] + sum_array(arr, n-1);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sum_array(arr, n) << endl;
    return 0;
}
