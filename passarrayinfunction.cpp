#include<iostream>
using namespace std;
    void printarray(int arr[],int size){
    for(int index=0;index<=size-1;index++){
        cout<<arr[index]<<" ";
    }
}
    int main(){
        int arr[]={1,2,3,4};
        int size=4;
         printarray(arr,size);
    return 0;


}           