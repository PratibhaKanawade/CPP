#include<iostream>
using namespace std;
int main(){

    string name="swiss";
    char ch='s';
    char pk='w';
    char bk='i';
    int count=0;
    int count1=0;
    int count2=0;

    //for finding frequency of character
    for(int i=0;i<=name.length();i++)

    {

      if(name[i]==ch )
      {
        count++;
      }

      if(name[i]==pk)
      {
        count1++;
      }

      if(name[i]==bk)
      {
        count2++;
      }

    }

    cout << "Frequency of s: " << count << endl;
    cout << "Frequency of w: " << count1 << endl;
    cout << "Frequency of i: " << count2 << endl;

    //  For finding first repeating character
    for (int i = 0; i < name.length(); i++) {

        if (name[i] == ch && count > 1) {
            cout << "1st repeating char is: " << name[i] << endl;
            break;
        }

        if (name[i] == pk && count1 > 1) {
            cout << "1st repeating char is: " << name[i] << endl;
            break;
        }

        if (name[i] == bk && count2 > 1) {
            cout << "1st repeating char is: " << name[i] << endl;
            break;
        }
    }
    
    return 0;
}