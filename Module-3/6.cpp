#include <iostream>
#include <string>
using namespace std;

int main() {
  
    cout << " IMPLICIT TYPE CONVERSION " << endl;
    
    int intNum = 10;
    double doubleNum = 5.75;
    
    
    double result1 = intNum + doubleNum;
    cout << "int + double: " << intNum << " + " << doubleNum 
         << " = " << result1 << " (int implicitly converted to double)" << endl;
    
    
    char letter = 'A';
    int charToInt = letter + 5;
    cout << "char 'A' + 5 = " << charToInt << " (char implicitly converted to int)" << endl;
    
    
    bool flag = true;
    int boolToInt = flag + 10;
    cout << "bool true + 10 = " << boolToInt << " (bool implicitly converted to int)" << endl;
    

    float floatNum = 3.14f;
    double floatToDouble = floatNum * 2.5;
    cout << "float * double: " << floatNum << " * 2.5 = " 
         << floatToDouble << " (float implicitly converted to double)" << endl;

    
    cout << "\n EXPLICIT TYPE CONVERSION " << endl;
    
    
    double price = 9.99;
    int intPrice = (int)price;
    cout << "double " << price << " to int: " << intPrice << " (using C-style cast)" << endl;
    
    
    int count = 7;
    double preciseCount = static_cast<double>(count) / 2;
    cout << "int " << count << " / 2 as double: " << preciseCount 
         << " (using static_cast)" << endl;
    
    
    double measurement = 15.78;
    int approx = static_cast<int>(measurement);
    cout << "double " << measurement << " to int: " << approx << " (using static_cast)" << endl;
    
    
    int number = 65;
    char* charPtr = reinterpret_cast<char*>(&number);
    cout << "int " << number << " reinterpreted as char: " << *charPtr 
         << " (ASCII 65 is 'A')" << endl;
    

    const int constValue = 100;
    int& mutableRef = const_cast<int&>(constValue);
    mutableRef = 200; 
    cout << "const int modified through const_cast: " << mutableRef 
         << " (this is dangerous!)" << endl;
    
    return 0;
}
