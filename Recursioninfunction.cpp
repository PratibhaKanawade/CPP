#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);  //recursion means function calling itself    //here print function call itself
}
int main(){
    print(5);
    return 0;
}




