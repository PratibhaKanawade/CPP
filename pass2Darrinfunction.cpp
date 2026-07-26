#include<iostream>
using namespace std;

void print2Darray(int arr[][4],int rowsize,int colsize){
//printing
cout<<"printing 2D array:"<<endl;
for(int rowindex=0;rowindex<rowsize;rowindex++){
        for(int colindex=0;colindex<colsize;colindex++){
        cout<<arr[rowindex][colindex]<<" ";
        }
    cout<<endl;
 }
   }

int main(){
    
//in this program we are taking input from user
int arr[3][4];
    int row=3;
    int col=4;

    //taking input
    for(int rowindex=0;rowindex<row;rowindex++){
        for(int colindex=0;colindex<col;colindex++){
            cout<<"enter input for arr["<<rowindex<<"]["<<colindex<<"]:";
        cin>>arr[rowindex][colindex];
    }
    cout<<endl;
}
   print2Darray(arr,row,col);
}