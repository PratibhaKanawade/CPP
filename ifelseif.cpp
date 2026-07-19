#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks>90){
        cout<<"you own A grade";
    }
     else if(marks>80){
        cout<<"you own B grade";
    }
    else  if(marks>70){
        cout<<"you own C grade";
    }
     else if(marks>60){
        cout<<"you own D grade";
    }
    
    return 0;

}           