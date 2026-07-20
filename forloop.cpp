#include<iostream>
using namespace std;
int main(){
   for(int count=1;count<=10;count=count+1)
   
   cout<<"Pratibha"<<endl;

   //counting  from 1 to 10
   for(int i=1;i<=10;i++)
   cout<<i<<" "<<endl;

   //counting from 50 to 100
   for(int i=50;i<=100;i++)
   cout<<i<<" "<<endl;

   //another way of counting from 50 to 100
   for(int i=50;i<100;i++)
   cout<<i<<" ";

   // break  loop se bahar nikale
   for(int i=1;i<=10;i++){
   cout<<i<<" ";
   if(i==5){
    break;
   }} 

   //continue
   for(int i=1;i<=5;i++){
   if (i==3){
    continue;
   }
   cout<<i<<" ";
   }
    return 0;

}           