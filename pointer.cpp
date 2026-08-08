#include<iostream>
using namespace std;


int main(){
    int number=50;
    cout<<"address of number is:"<<&number<<endl;
    int *ptr=&number;

    cout<<number<<endl;
    cout<<&number<<endl;
    cout<<&ptr<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    (*ptr)++;
    cout<<number;
    


    return 0;
}