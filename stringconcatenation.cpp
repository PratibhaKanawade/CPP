#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name1[20]="Pratibha";
    char name2[]="Kanawade";
    
    strcat(name1,name2);

    cout<<"name1 is:"<<name1;
}