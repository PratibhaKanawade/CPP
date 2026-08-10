#include<iostream>
using namespace std;
int main(){

    int a=10;
    int *ptr=&a;
    int **ctr=&ptr;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ctr<<endl;
    cout<<&ctr<<endl;
    cout<<*ctr<<endl;
    cout<<**ctr<<endl;
}