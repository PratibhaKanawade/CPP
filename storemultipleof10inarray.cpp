#include<iostream>    // Q. Write 10th table means store multiples of 10
using namespace std;

void multipleof10(int arr[], int size)
{
    int count = 1;

    for(int index = 0; index <= 9; index++)
    {
        arr[index] = 10 * count;
        count++;
    }

    for(int index = 0; index <= size - 1; index++)
    {
        cout << arr[index] << " ";
    }
}   // <-- Missing closing brace was added here

int main()
{
    int arr[10];
    int size = 10;

    multipleof10(arr, size);

    return 0;
}