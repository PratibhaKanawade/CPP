#include<iostream>
#include<string>
using namespace std;
int main(){

string s="my name is lata";

 int position=s.find("name");

if(s.find("name")!=string::npos){    //here we use string::npos , hence we not write string::npos it gives output like 13678576348901432544378

cout<<"found"<<endl;
cout<<"at position:"<<position;
}

else{
    cout<<"not found";
  }

}