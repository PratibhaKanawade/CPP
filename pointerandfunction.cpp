#include<iostream>
using namespace std;

void change(int *ptr)
{
    *ptr = 100;
}

int main()
{
    int a = 10;

    change(&a);

    cout << a;
}