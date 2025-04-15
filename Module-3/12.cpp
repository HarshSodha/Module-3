	#include <iostream>
#include <iomanip> 
using namespace std;


double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    char operation;
    double num1, num2, result;
    
    cout << "Simple Calculator Program" << endl;
    cout << "------------------------" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;
    
    switch(operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }
    
    cout << fixed << setprecision(2);
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
    
    return 0;
}


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if(b == 0) {
        cout << "Error: Division by zero!" << endl;
        exit(1);
    }
    return a / b;
}
