#include<iostream>
using namespace std;

    int sum(int a,int b){
        return a+b;
    }
    
    //2nd example function declaration
    void PrintMyName(){
        cout<<"Kanawade";
    }
        
    

    int main(){
    
      int ans= sum(5,10);
      cout<<" your sum is:"<<ans<<endl;
      
      //2nd example function call
      PrintMyName();

    return 0;
    
}           