#include<iostream>
using namespace std;

void hello(){
    cout<<"Hello";
}

int main(){
    void (*ptr)()=hello;   //here ptr stores address of the hello() function
    ptr();               // call function through the function

    return 0;
}