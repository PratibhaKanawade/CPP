#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"i:"<<i<<"    "<< "j:"<<j<<endl;
        }
    }
    
    for(int j=1;j<=2;j++){
        for(int k=1;k<=2;k++){
            cout<<j*k<<" ";
        }
    }
    return 0;

}           