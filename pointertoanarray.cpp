#include<iostream>
using namespace std;
int main(){

    int arr[3]={10,20,30};
    int(*ptr)[3]=&arr;

    cout<<(*ptr)[0]<<endl;
    cout<<(*ptr)[1]<<endl;
    cout<<(*ptr)[2]<<endl;
}