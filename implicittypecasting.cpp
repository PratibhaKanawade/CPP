#include<iostream>
using namespace std;
int main(){
    // in type casting in this program we learn what is implicit typecasting
    //implicit typecasting done automatically by compiler
    
    //int to float
    int p=10;
    float q=p;
    cout<<q<<endl;

    //int to float
    int num1=10;
    float num2=5.5;
    float result1=num1+num2;
    int result2=num1+num2;
    cout<< result1<<endl;
    cout<< result2<<endl;

    //char to int
    char letter='A';
    int number=letter;
    cout<<number<<endl;
     
    //char to int
    char ch='A';
    int a=ch+1;//value of A is 65 so 65+1=66
    cout<<a<<endl;
    
    //int to char
    int a1=97;
    char ch1=a;
    cout<<a1<<endl;

    //int to double
    int x=25;
    double y=x;
    cout<<y<<endl;
    return 0;

}           