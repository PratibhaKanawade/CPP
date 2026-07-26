#include <iostream>
using namespace std;

int main()
{
    //array declaration
    int pk[8];

    //array initialization
    int pbk[5]={1,2,3,4,5};

    //basic array program
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++)//Here we show our index is from 0 to 5
    {
        cout << arr[i] << " "; //array access
    }
    cout<<endl;

    //input in array
    int j[5];
    for(int j=0;j<=4;j++){
        cout<<"enter your values:";
        cin>>arr[j];
    }
    for(int j=0;j<=4;j++){  //array traverse
        cout<<arr[j]<<" ";
    }
    
    //sum of index element
    int pratibha[]={10,20,30,40,50};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+pratibha[i];
    }
    cout<<"total sum is:"<<sum;


    return 0;
}