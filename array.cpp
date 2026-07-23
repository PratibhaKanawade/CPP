#include <iostream>
using namespace std;

int main()
{
    //array declaration
    int pk[8];

    //array initialization
    int pbk[5]={1,2,3,4,5};

    //basic array
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++)//Here we show our index is from 0 to 5
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    //input in array
    int j[5];
    for(int j=0;j<=4;j++){
        cout<<"enter your values:";
        cin>>arr[j];
    }
    for(int j=0;j<=4;j++){
        cout<<arr[j]<<" ";
    }
    
    

    return 0;
}