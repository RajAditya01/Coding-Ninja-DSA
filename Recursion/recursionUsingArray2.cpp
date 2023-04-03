#include <iostream>
using namespace std;

bool is_sorted(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}
	bool isSmallerSorted = is_sorted(a + 1, size - 1);
	return isSmallerSorted;
	if (isSmallerSorted) {
		return true;
	} else {
		return false;
	}
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (is_sorted(arr, size)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
