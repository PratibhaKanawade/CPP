#include<iostream>
using namespace std;

    int getMultiplication(int x,int y,int z){
        int result=x*y*z;
        return result;
    }

    //2nd example function declaration
    int printMyName(){
        for(int i=1;i<=10;i++){
            cout<<"Pratibha"<<"  ";
        }
    }
    int main(){
        
        int ans= getMultiplication(2,3,5);
        cout<<"your multiplication is:"<<ans<<endl;

        //2nd example function call
        printMyName();
    return 0;

}           