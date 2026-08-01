#include<iostream>
using namespace std;
int main(){
    {
        int x=10;
        cout<<"value of x is :"<<x<<endl;
    }
    
 //cout<<"x is:"<<x;  this give an error because variable declared inside{ } is only available inside that block
    return 0;
}