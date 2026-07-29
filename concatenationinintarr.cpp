#include<iostream>
using namespace std;

void concatenation(int a[],int SIZEa ,int b[],int SIZEb ){
    //printing of 1st array
    for( int i=0;i < SIZEa;i++){
        cout<<a[i]<<" ";
    }

    //printing of 2nd array
    for(int j=0;j<SIZEb;j++){
        cout<<b[j]<<" ";
    }
}

int main(){
    int a[]={1,2,3,4};
    int b[]={5,6,7,8};

    int SIZEa=4;
    int SIZEb=4;
     
    concatenation(a,SIZEa,b,SIZEb);

    return 0;
}