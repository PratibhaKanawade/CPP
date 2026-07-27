#include<iostream>
using namespace std;
int main(){
 
    //declaration
    char arrdec[10];  //10 is size

    //initialization
    char arr[10]="Pratibha";
    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl<<arr[4]<<endl<<arr[5]<<endl<<arr[6]<<endl<<arr[7]<<endl;

    cout<<"printing the value of 8th index:"<<arr[8]<<endl;  /*eska output kucha bhi nahi aata null character chupata nahi hai 
                                                               uski ASCII value hoti hai */
    
                                                               /*jab hum chararray ko ex:"Pratibha" aise initialise karte hai 
                                                               to hamare last index ke next index me null character automatically 
                                                               initialise hota hai  uski ASCII value 0 hoti hai aur vo '\0' aise
                                                                denote kiya jata hai*/
     
                                                               
     int ASCIIValue=arr[8] ;
     cout<<"ASCIIValue of arr[8] is:"<<ASCIIValue<<endl;    
     
     //example2:insertion of null character
     char nullarr[4];
     nullarr[0]='p';
     nullarr[1]='k';  //size of my array is 4 and index is 0 to 3 but i use only index 0 and 1
     nullarr[2]='\0'; //after my used index i declare null character 
     cout<< nullarr[0]<<endl<<nullarr[1]<<endl;
     cout<<nullarr[2]<<endl;  //this is not giving an output
     int ASCIIvalue=nullarr[2];
     cout<<"ASCII value of nullarr[2] is: "<<ASCIIvalue<<endl;

     
    return 0;
}