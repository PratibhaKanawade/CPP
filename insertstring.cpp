#include<iostream>
using namespace std;

int main(){

    string name="Pratibha";
    string temp="Kanawade";
    name.insert(8,temp);   //s.insert(position,t)    //here s is name of your string
    
    cout<<name<<endl;
}