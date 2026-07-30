#include<iostream>
using namespace std;
int voting(int age){
    if(age>=18){
        cout<<"your eligible for voting"<<endl;
    }
    else
    {
        cout<<"your not eligible for voting"<<endl;
    }
}



int main(){

  voting(17);
    return 0;
}