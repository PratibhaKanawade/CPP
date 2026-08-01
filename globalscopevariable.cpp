#include<iostream>
using namespace std;

int age=20;

 void myage(){
    cout<<"display my age:"<<age<<endl;
 }

 int main(){
    cout<<" show my age:"<<age<<endl;  //in output this shows 1st because this is 1st statement inside main
    myage();                           //after this we call myage() function then it prints display my age inside this function
 }
