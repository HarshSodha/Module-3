//pop
#include <iostream>

using namespace std;


float calculateRectangleArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;
    
    cout << "Enter the length of the rectangle = ";
    cin >> length;
    
    cout << "Enter the width of the rectangle = ";
    cin >> width;
    
    float area = calculateRectangleArea(length, width);
    cout << "The area of the rectangle is = " << area << endl;
    
    return 0;
}

//oop

#include <iostream>
using namespace std;


class Rectangle {
private:
    float length;
    float width;
    
public:
    
    Rectangle(float l, float w) : length(l), width(w) {}
    
    
    float calculateArea() {
        return length * width;
    }
};

int main() {
    float length, width;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    
    Rectangle rect(length, width);
    
  
    float area = rect.calculateArea();
    cout << "The area of the rectangle is: " << area << endl;
    
    return 0;
}
