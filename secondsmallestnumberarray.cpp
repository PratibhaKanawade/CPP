#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 45, 18};
    int n = 5;

    int smallest = arr[0];
    int secondsmallest = arr[1];

    for (int i = 2; i < n; i++) {

        if (arr[i] < smallest) {
            secondsmallest= smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmallest) {
            secondsmallest = arr[i];
        }
    }

    cout << "smallest = " << smallest << endl;
    cout << "Second smallest = " << secondsmallest << endl;

    return 0;
}