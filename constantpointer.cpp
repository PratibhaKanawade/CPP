#include<iostream>
using namespace std;
int main(){

    int x=10;
    int y=20;
    
    int *const ptr=&x;
    cout<<*ptr<<endl;

    *ptr=30 ;   // we change value of x 
    cout<<*ptr;

     //ptr=&y;   it gives an error we cannot  change where a ptr points


    return 0;
}