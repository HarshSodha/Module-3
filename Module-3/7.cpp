#include <iostream>
#include <bitset> 
using namespace std;

int main() {
  
    int a = 15, b = 7;
    bool x = true, y = false;
    
    // Arithmetic Operators
   
    cout << a << " + " << b << " = " << (a + b) << endl;
    cout << a << " - " << b << " = " << (a - b) << endl;
    cout << a << " * " << b << " = " << (a * b) << endl;
    cout << a << " / " << b << " = " << (a / b) << " (integer division)" << endl;
    cout << a << " % " << b << " = " << (a % b) << " (remainder)" << endl;
    cout << "++a = " << ++a << " (prefix increment)" << endl;
    cout << "b++ = " << b++ << " (postfix increment)" << endl;
    cout << "After increment: a = " << a << ", b = " << b << endl;
    
    
    a = 15;
    b = 7;
    
    // Relational Operators
   
    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    cout << a << " > " << b << " : " << (a > b) << endl;
    cout << a << " < " << b << " : " << (a < b) << endl;
    cout << a << " >= " << b << " : " << (a >= b) << endl;
    cout << a << " <= " << b << " : " << (a <= b) << endl;
    
    // Logical Operators
   
    cout << x << " && " << y << " : " << (x && y) << endl;
    cout << x << " || " << y << " : " << (x || y) << endl;
    cout << "!" << x << " : " << (!x) << endl;
    
    // Bitwise Operators
   
    cout << a << " in binary: " << bitset<8>(a) << endl;
    cout << b << " in binary: " << bitset<8>(b) << endl;
    cout << a << " & " << b << " : " << (a & b) << " (" << bitset<8>(a & b) << ")" << endl;
    cout << a << " | " << b << " : " << (a | b) << " (" << bitset<8>(a | b) << ")" << endl;
    cout << a << " ^ " << b << " : " << (a ^ b) << " (" << bitset<8>(a ^ b) << ")" << endl;
    cout << "~" << a << " : " << (~a) << " (" << bitset<8>(~a) << ")" << endl;
    cout << a << " << 2 : " << (a << 2) << " (" << bitset<8>(a << 2) << ")" << endl;
    cout << a << " >> 2 : " << (a >> 2) << " (" << bitset<8>(a >> 2) << ")" << endl;
    
   
  
    int c = a;
    c += b; cout << "c += b ? c = " << c << endl;
    c -= b; cout << "c -= b ? c = " << c << endl;
    c *= b; cout << "c *= b ? c = " << c << endl;
    c /= b; cout << "c /= b ? c = " << c << endl;
    c %= b; cout << "c %= b ? c = " << c << endl;
    c &= b; cout << "c &= b ? c = " << c << endl;
    c |= b; cout << "c |= b ? c = " << c << endl;
    c ^= b; cout << "c ^= b ? c = " << c << endl;
    c <<= 1; cout << "c <<= 1 ? c = " << c << endl;
    c >>= 1; cout << "c >>= 1 ? c = " << c << endl;
    
    return 0;
}
