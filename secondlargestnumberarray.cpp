#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 45, 18};
    int n = 5;

    int largest = arr[1];
    int secondLargest = arr[0];

    for (int i = 2; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest << endl;

    return 0;
}