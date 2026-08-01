#include<iostream>
using namespace std;
 
void display(){
    int a=10;
    cout<<" value of a is:"<<a<<endl;
}

int main (){
    display();

    //cout<<" value of a is:"<<a<<endl;     this gives an error in local scope variable is access only inside where it is declared
}