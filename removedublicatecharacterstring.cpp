#include<iostream>
using namespace std;
int main(){

    string s="programming";
    string result=" ";

    for(int i=0 ; i<s.length() ; i++)
    {
        if(result.find(s[i])==string::npos)

        result=result+s[i];
    }

 cout<<result;

}