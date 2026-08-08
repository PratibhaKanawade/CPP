#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter value of n:";
    cin>>n;
    int *ptr=new int[n];
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;
    *(ptr+3)=40;
    *(ptr+4)=50;


    for(int i=0;i<5;i++){
    cout<<ptr[i]<<endl;
    }

    delete[] ptr;
}