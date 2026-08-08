#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int *ptr=new int [n];
   cout<< *(ptr+1)<<endl;  
   cout<<(*ptr)+1<<endl;

}