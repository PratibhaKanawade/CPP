#include<iostream>    //Q.initialise an array with -1 in each block
using namespace std;
void arrpk(int arr[],int size){

for(int index=0;index<size;index++){
    arr[index]=-1;
}

for(int index=0;index<size;index++){
    cout<<arr[index]<<" ";
}
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    arrpk( arr,size);
    
    return 0;

}           