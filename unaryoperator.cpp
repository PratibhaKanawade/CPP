#include<iostream>
using namespace std;
int main(){
    int a=5;
    //pre increment
    cout<<"value of a:"<<a<<endl;
    cout<<"value of ++a:"<<(++a)<<endl;

    //post increment
    cout<<"value of a++:"<<(a++)<<endl;

    //pre decrement
    cout<<"value of --a:"<<(--a)<<endl;

    //post decrement;
    cout<<"value of a--:"<<(a--)<<endl;

    //negate
    cout<<"value of -a"<<-a<<endl;

    //another example
    int y= ++a;
    cout<<y<<endl<<a<<endl;
    return 0;

}           