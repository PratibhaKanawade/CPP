#include<iostream>
#include<cstring>
using namespace std;
int main(){

    //1st example
    char pk[]="Pratibha";
    char bk[]="Pratibha";
    
   cout<<strcmp(pk,bk);

   //2nd example
   char name[]="Pratibha";
    char name2[]="kanawade";
    
   cout<<strcmp(name,name2);   //gives negative or positive value 

   //3rd example
   char school[]="plbk";
    char college[]="jspm";
    
   cout<<strcmp(school,college);

    return 0;
}