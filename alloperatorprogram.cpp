#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;  

    cout << "Bitwise Operators :" << endl;
    cout << "a = " << a << " b = " << b  << endl;
    cout << "a & b  (AND) = " << (a & b ) << endl; 
    cout << "a | b  (OR)  = " <<( a | b ) << endl;  
    cout << "a ^ b  (XOR) = " << (a ^ b)  << endl;  
    cout << "~a     (NOT) = " << (~a )     << endl;  
    cout << "a << 1 (LEFT SHIFT)  = " <<( a << 1 )<< endl;  
    cout << "a >> 1 (RIGHT SHIFT) = " << (a >> 1) << endl;
    
    cout << " Logical Operators :" << endl;
    int x = 1, y = 0;
    cout << "x = 1, y = 0" << endl;
    cout << "x && y (AND) = " <<( x && y) << endl; 
    cout << "x || y (OR)  = " << (x || y) << endl;  
    cout << "!x     (NOT) = " << (!x )   << endl; 

    cout<<"assignment operator:"<<endl;
     cout << "a += 5  → a = " << a << endl;  
     cout << "a -= 3  → a = " << a << endl;  
     cout << "a *= 2  → a = " << a << endl;  
     cout << "a /= 4  → a = " << a << endl;  
     cout << "a %= 4  → a = " << a << endl;  
 
     
     cout<<"rational operator:"<<endl;
     cout << (a == b) << endl;   
     cout << (a != b) << endl;
     cout << (a > b)  << endl;   
     cout << (a < b)  << endl;   
     cout << (a >= b) << endl;   
     cout << (a <= b) << endl;      
     
     
     cout<<"arithmatic operator:"<<endl;
     cout << (a +b) << endl;   
     cout << (a - b) << endl;
     cout << (a * b)  << endl;   
     cout << (a / b)  << endl;   
     cout << (a % b) << endl;   

}