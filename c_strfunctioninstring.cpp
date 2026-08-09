#include<iostream>
using namespace std;

int  main(){

    string s="hello";

    const char*p=s.c_str(); //it gives c-style version of c++ string

    cout<<p;

}