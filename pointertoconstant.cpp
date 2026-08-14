#include<iostream>
using namespace std;
int main(){

    int x=10;
    int y=20;
    
    const int *ptr=&x;
    cout<<*ptr;

    //*ptr=30   this gives an error cant change value of x it is constant

    ptr=&y;   //we can change where a ptr points


    return 0;
}