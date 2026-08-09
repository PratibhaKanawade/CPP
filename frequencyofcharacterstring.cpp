#include<iostream>
#include<string>
using namespace std;
int main(){
    string name="hello";
    char ch='l';
    int count=0;
    
    for(int i=0 ; i<name.length() ; i++)
    {
        if(name[i]==ch)
        {
            count++;
        }
    }

    cout<<count;
}