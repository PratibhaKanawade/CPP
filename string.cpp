#include<iostream>
using namespace std;

int main(){

    //declaration
    string name;
    name.push_back('p');
    name.push_back('l');
    name.push_back('b');
    name.push_back('k');
    cout<<name<<" "<<endl;

    //initialization
    string surname="Kanawade";

    //updation
    surname="Patil";

    cout<<surname<<endl;

    char arr[100];
    arr[0]='p';
    arr[1]='l';
    arr[2]='b';
    arr[3]='k';
    arr[4]='\0';  //if we are not using null character then cout keep reading memory until it finds \0
    cout<<arr;
    
    return 0;
}