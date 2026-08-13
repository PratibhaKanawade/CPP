#include<iostream>
using namespace std;
int main(){

    int *ptr=new int(10);
    cout<<*ptr<<endl;  //here output is 10

    delete ptr; //memory given to your program is returned back to your system

    cout<<*ptr;   //dangling pointer  
     
     /*That's why we should do:

     delete ptr;
     ptr = nullptr;

     and never dereference ptr after deleting */

    return 0;
}