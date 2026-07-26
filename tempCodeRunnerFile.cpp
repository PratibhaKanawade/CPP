#include<iostream>
using namespace std;
int main(){
    //simple do while loop
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=10);
    cout<<endl;
    

    //do while loop using break
   int j=1;
    do{
        cout<<j<<" ";
        {
        if(j==5)