#include<iostream>
using namespace std;
int main(){
    int height;
    cout<<"enter your height:";
    cin>>height;
    int weight;
    cout<<"enter your weight:";
    cin>>weight;
    if(height>5){
        if(weight>50){
            cout<<"you got a good BMI"<<endl;
        }
        else{
            cout<<"bhai tujjse na ho payega"<<endl;
        }
    }
    else{
        cout<<"you need complan"<<endl;
    }
    return 0;

}           