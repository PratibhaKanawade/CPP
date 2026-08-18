#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int j = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with 0
    while (j < n) {
        arr[j] = 0;
        j++;
    }

    // Print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}