#include <iostream>    //Q.Flip 1 to 0 and 0 to 1 in an array
using namespace std;

void flipArray(int arr[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (arr[index] == 0)
        {
            arr[index] = 1;
        }
        else if (arr[index] == 1)
        {
            arr[index] = 0;
        }
    }

    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
}

int main()
{
    int arr[] = {1, 0, 1, 1, 0, 0, 1};
    int size = 7;

    flipArray(arr, size);

    return 0;
}

    
      



