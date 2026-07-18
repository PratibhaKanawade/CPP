#include<iostream>
using namespace std;
int main(){
    //variable declaration
    int marks;
    //for printing things on screen
    cout<<"enter your marks"<<endl;
    //for taking input
    cin>>marks;
    cout<<"your marks are:"<<marks<<endl;

    //getline()
    cin.ignore();
    string name;
    cout<<"enter your full name:"<<endl;
    getline(cin,name);
    cout<<"your name is:"<<name;
    return 0;

}           