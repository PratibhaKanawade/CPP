#include<iostream>
using namespace std;
int main(){

    int a=5,b=10,c=15;

    int *ptr[3]={&a,&b,&c};

    cout<<*ptr[0]<<endl;
    cout<<*ptr[1]<<endl;
    cout<<*ptr[2]<<endl;
}