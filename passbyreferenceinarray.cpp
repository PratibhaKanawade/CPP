#include<iostream>
using namespace std;

void counteven(int arr[],int size,int &count){

    for(int i=0;i<size;i++){

        if(arr[i]%2==0){

            count++;
        }
    }
}

    int main(){

        int arr[]={10,20,30,40,50};
        int size=5;
        int count=0;
        counteven(arr,size,count);
        cout<<count;
    
}