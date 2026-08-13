#include<iostream>
using namespace std;
int main(){

    int *ptr=new int(10);
    cout<<*ptr<<endl;  //here output is 10

    delete ptr; //memory given to your program is returned back to your system

    ptr = nullptr; 
    /*it shows allowing  ptr to  keep the old invalid address, we make it point to nothing.
    ptr ─────→ nullptr */

    cout<<*ptr;   // here ptr is not dangling pointer  
     
    return 0;
}