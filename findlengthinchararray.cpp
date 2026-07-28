#include<iostream>
using namespace std;
int findlength(char arr[])
{
    int count=0;
    int index=0;
    while(arr[count]!='\0'){  //arr[count] is character at index

                              // This function counts the letters of the character array one by one.
                              // It stops at '\0' and returns the total number of letters.

        count++;
        index++;
    }
    return count;
}
int main(){
    char arr[]="Pratibha";
   cout<<"length is:"<<findlength(arr)<<endl;


    return 0;
}