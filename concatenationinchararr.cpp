#include <iostream>
using namespace std;

void concatenation(char a[], char b[])
{
    int i = 0;
    int j = 0;

    // Find the end of the first string
    while (a[i] != '\0')
    {
        i++;
    }

    // Copy the second string to the end of the first string
    while (b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }

    // Add null character at the end
    a[i] = '\0';

    cout << a << endl;
}

int main()
{
    char a[20] = "Pratibha";
    char b[] = "Kanawade";

    concatenation(a, b);

    return 0;
}