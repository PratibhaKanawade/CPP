#include<iostream>
using namespace std;
int main(){
    //simple assignment
    int arr=5;
    //add and assign
    int a=5,b=6;
    cout<<"value of a+=b is:"<<(a+=b) <<endl;
    //substract and assign
    cout<<"value of a-=b is:"<<(a-=b) <<endl;
    //multiply and assign
    cout<<"value of a*=b is:"<<(a*=b )<<endl;
    //divide and assign
    cout<<"value of a/=b is:"<<(a/=b)<<endl;
    //modulus and assign
    cout<<"value of a=%b is:"<<(a%=b)<<endl;
    //bitwise and and assign
    cout<<"value of a&=b is:"<<(a&=b)<<endl;
    //bitwise or and assign
    cout<<"value of a|=b is:"<<(a|=b) <<endl;
    return 0;

}           