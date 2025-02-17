#include <iostream>
#include <vector>

using namespace std;

void reverseArray(int arr[], int m) {
    int start = 4;
    int end = m - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int m) {
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 6);
    printarray(arr, 6);
    return 0;
}
