#include<iostream>
using namespace std;
int main(){

    char str[100];
    int num=0; 

    cout<<"enter your string:";
    cin.getline(str,100);

    for(int i=0;str[i]!='\0';i++)
    {
      int digit=str[i]-'0';   //int digit ='5'-'0' =53-48=5
      num = num*10 + digit;   //num=0*10+5 =5
    }
    cout<<"integer is:"<<num;
}