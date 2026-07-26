#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter decimal number:";
    cin>>n;
    while(n>0){
   int bit= n%2; //for finding  remainder
   cout<<bit; //to print remainder
   n=n/2;   //to devide nimber
    }
    return 0;
}           