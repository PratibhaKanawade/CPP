#include<iostream>
using namespace std;

void solve(int *arr)    //here array is not pass here address is pass
{
    cout<<"inside function:"<<sizeof(arr)<<endl;
}

int main(){

    int arr[4]={1,2,3,4};
    cout<<sizeof(arr)<<endl;
    solve(arr);

    return 0;
}