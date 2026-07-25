#include<iostream>    //Q.write a function to reverse an array
using namespace std;
void pbk(int arr[],int size){
        for(int index=0;index<=size-1;index++){
            cout<<arr[index]<<" ";
        }
    }
    int main(){
        int arr[5]={0};
        int size=5;
        pbk(arr,size);
    }
      