#include<iostream>
using namespace std;
void pbk(int arr[],int size){
        for(int index=4;index>=0;index--){
            cout<<arr[index]<<" ";
        }
    }
    int main(){
        int arr[]={10,20,30,40,50};
        int size=5;
        pbk(arr,size);
    }
      