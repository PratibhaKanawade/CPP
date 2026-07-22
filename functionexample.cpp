#include<iostream>
using namespace std;
   //1st example function declaration
    int getMultiplication(int x,int y,int z){
        int result=x*y*z;
        return result;
    }

    //2nd example function declaration
    void printMyName(){
        for(int i=1;i<=10;i++){
            cout<<"Pratibha"<<"  ";
        }
    }

    //3rd example print the table of 5
    void PrintFiveTable(int num){
        for(int i=1;i<=10;i++){
            cout<<num*i<<endl;
        }
    }

    //4th example convert fahrenheit to celcius
    int celtofar(int far){
        int celcius=(far-32)*5/9;
        return celcius;
    }
    int main(){
        
        //1st example function call
        int ans= getMultiplication(2,3,5);
        cout<<"your multiplication is:"<<ans<<endl;

        //2nd example function call
        printMyName();

        cout<<endl;

        //3rd example function call
        PrintFiveTable(5);

        //4th example function call
        int answer=celtofar(5);
        cout<<"conversion is:"<<answer;

    return 0;

}           