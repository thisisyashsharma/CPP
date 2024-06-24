#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int key) {
    int i = 0; 
    int j = size - 1;
    int mid;

    while(i <= j) {
        mid = (i + j) / 2;
        
        if(a[mid] == key) return mid;

        if(key < a[mid]) {
            j = mid - 1; // Correct the upper bound
        } else {
            i = mid + 1; // Correct the lower bound
        }
    }

    cout << mid << " " << endl;
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int result = binarySearch(arr, size, key);

    if(result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
