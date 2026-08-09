#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "madam";
    string rev = "";

    for(int i = s.length() - 1; i >= 0; i--)
    {
        rev = rev + s[i];
    }

    if(s == rev)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}