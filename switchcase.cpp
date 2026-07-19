#include<iostream>
using namespace std;
int main(){
    /*it is a alternative way to write ifelse statement if 
    you need to compare variable against multiple value */
    char grade;
    cout<<"enter your grade:"<<endl;
    cin>>grade;
    switch(grade){
    case 'A':cout<<"your marks in range of 90 to 100"<<endl;
    break;
    case 'B':cout<<"your marks in range of 80 to 90"<<endl;
    break;
    case 'C':cout<<"your marks in range of 70 to 80"<<endl;
    break;
    case 'D':cout<<"your marks in range of 60 to 70"<<endl;
    break;
    default:cout<<"your failed"<<endl;
    }
    return 0;

}  /*if (grade == 'A')
    {
        cout << "Your marks are in the range of 90 to 100";
    }
    else if (grade == 'B')
    {
        cout << "Your marks are in the range of 80 to 90";
    }
    else if (grade == 'C')
    {
        cout << "Your marks are in the range of 70 to 80";
    }
    else if (grade == 'D')
    {
        cout << "Your marks are in the range of 60 to 70";
    }
    else
    {
        cout << "You failed";
    } */         