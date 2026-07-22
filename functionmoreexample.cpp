#include<iostream>
using namespace std;
//1st print 1 to 100
int print1to100(){
    for(int i=1;i<=100;i++){
        cout<<i<<" ";
    }
}

// 2nd find simple interest
int SI(int P,int R,int T){
    int SI=P*R*T/100;
    return SI;
}

int main(){
    //1st function call
    print1to100();
    cout<<endl;

    //2nd function call
    SI(5,5,4);
    cout<<"your SI is:"<<SI;
    
    return 0;

}           