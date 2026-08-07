#include<iostream>
using namespace std;

void solve(int &a){
    cout<<"inside function:"<<a<<endl;
    a++;
    cout<<"inside function:"<<a<<endl;
}

int main(){
    int a=5;
    cout<<"inside main:"<<a<<endl;  //1st print this
    solve(a);                       //then go in function and print in function
    cout<<"inside main:"<<a<<endl;  //last return from function and print a value that is change in function

    return 0;
}