//example 1

#include<iostream>
using namespace std;

void solve(char &a){
    cout<<"inside function:"<<a<<endl;
    a++;
    cout<<"inside function:"<<a<<endl;
}

int main(){
    char a='p';
    cout<<"inside main:"<<a<<endl;  //1st print this
    solve(a);                       //then go in function and print in function
    cout<<"inside main:"<<a<<endl;  //last return from function and print a in main

    return 0;
} 

//example 2
/*#include<iostream>
using namespace std;

void solve(string &arr ){
    cout<<"inside function:"<<arr<<endl;
    arr[0]='l';
    cout<<"inside function:"<<arr<<endl;
}

int main(){
    string str="pratibha";
    cout<<"inside main:"<<str<<endl;  //1st print this
    solve(str);                       //then go in function and print in function
    cout<<"inside main:"<<str<<endl;  //last return from function and print a in main

    return 0;
}*/
