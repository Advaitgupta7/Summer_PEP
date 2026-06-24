#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key && arr[i] >= 20) {
            return arr[i]*2;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12,32,55,1,26,53,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 26;

    int result = linearSearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}