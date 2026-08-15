#include<iostream>
using namespace std;
int main(){

    int rows,cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;

    int **arr=new int*[rows];
    for(int i=0;i<rows;i++){
        arr[i]=new int [cols];
    }

    //for input
    for(int i= 0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"array is:"<<endl;

    //for output
    for(int i= 0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //for free memory
    for(int i=0 ; i<rows ; i++){
        delete[] arr[i];
    }

    delete[] arr ;

}