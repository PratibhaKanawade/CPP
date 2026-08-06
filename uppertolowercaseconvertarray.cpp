#include<iostream>
using namespace std;
int main()
{
  char str[100]  ;
  cout<<"enter your upper case string:";
  cin.getline(str,100);

  for(int i=0;str[i]!='\0';i++){

    if( (str[i]>='A' && str[i]<='Z')  )
    {
        str[i]=str[i]-'A'+'a';

        //str[i] = str[i] + 32;
    }

  }

  cout<<"your lower string is:"<<str;
}