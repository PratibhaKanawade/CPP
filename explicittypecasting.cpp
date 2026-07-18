#include<iostream>
using namespace std;
int main(){
    //in this program we learn what is explicit typecasting 
    //explicit typecastig means programmer manually tell compiler to convert data type

   //int to float 
    int num=25;
   float x=(float)num;
   cout<<"int to float: "<<x<<endl;

   //double to int
   double price=99.99;
   int a=(int)price;
   cout<<"double to int:"<<a<<endl;

   //int to char
   int p=65;
   char ch=(char )p;
   cout<<"int to char:"<<ch <<endl;

   //char to float
   char pk='a';
   float n=(float)pk;
   cout<<"char to float:"<<n<<endl;

    return 0;

}           