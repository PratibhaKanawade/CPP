#include<iostream>
using namespace std;
int main(){
    
    int a=10;
    void *ptr=&a;
    cout<<*(int*)ptr;

    return 0;
}