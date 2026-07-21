#include<iostream>
using namespace std;
int main(){
    //simple do while loop
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=10);
    cout<<endl;
    

    //do while loop using break
   int j=1;
    do{
        cout<<j<<" ";
        {
        if(j==5)
        break;
    }
        j++;
    }
    while(j<=10);
    cout<<endl;

    //do while loop using continue
    int k=0;
    do{
            k++;
        if(k==5)
        {
        continue;
    }
    cout<<k<<" ";
  }while(k<10);
  return 0;
}           