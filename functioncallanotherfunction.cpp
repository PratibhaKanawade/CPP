#include<iostream>
using namespace std;

void printmyname(){
    cout<<"Pratibha"<<endl;
}

void copyfunction(){   //here copyfunction() call printname()
    printmyname();
}

int main(){

    copyfunction();

    
    return 0;
}