#include<iostream>
using namespace std;
int main(){

    string name=" I Love C++";
    string result="";

    for(int i=0;i<=name.length();i++)
    {
        if(name[i]!=' ')
        {
            result.push_back(name[i]);
        }
       
    }
     cout<<result;
    return 0;
}