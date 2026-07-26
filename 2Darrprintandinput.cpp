#include<iostream>
using namespace std;
int main(){
    //in this program we are not taking input from user
    /*int arr[3][4]={  {1,2,3,4}, 
                       {5,6,7,8} ,
                       {9,10,11,12} };
    int row=3;
    int col=4;

    //printing
    for(int rowindex=0;rowindex<=row-1;rowindex++){
        for(int colindex=0;colindex<col;colindex++){
        cout<<arr[rowindex][colindex]<<" ";
    }
    cout<<endl;
}*/


//in this program we are taking input from user
int arr[3][4];
    int row=3;
    int col=4;

    //taking input
    for(int rowindex=0;rowindex<=row-1;rowindex++){
        for(int colindex=0;colindex<col;colindex++){
            cout<<"enter input for arr["<<rowindex<<"]["<<colindex<<"]:";
        cin>>arr[rowindex][colindex];
    }
    cout<<endl;
}
//printing
for(int rowindex=0;rowindex<=row-1;rowindex++){
        for(int colindex=0;colindex<col;colindex++){
        cout<<arr[rowindex][colindex]<<" ";
    }
    cout<<endl;
}
    return 0;

}           