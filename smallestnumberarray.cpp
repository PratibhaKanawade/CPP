#include<iostream>
using namespace std;
int main(){

    int arr[5]={10,20,30,40,50};

    int smallest=arr[0];

    for(int i=1;i<=4;i++){

        if(arr[i]<smallest){
            smallest=arr[i];
           
        }

    }

     cout<<"smallest number is:"<<smallest;
}