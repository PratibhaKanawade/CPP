#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {10, 25, 7, 45, 18};
    int n = 5;

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    return 0;
}