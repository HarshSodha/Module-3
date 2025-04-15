#include <iostream>
using namespace std;

int main() {
    float marks;
    
    
    cout << "Enter student's marks: ";
    cin >> marks;
    
   
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100." << endl;
        return 1; 
    }
    
   
    char grade;
    
    if (marks >= 90) {
        grade = 'A';
    } 
    else if (marks >= 80) {
        grade = 'B';
    }
    else if (marks >= 70) {
        grade = 'C';
    }
    else if (marks >= 60) {
        grade = 'D';
    }
    else if (marks >= 50) {
        grade = 'E';
    }
    else {
        grade = 'F';
    }
    
    
    cout << "Student's Grade: " << grade << endl;
    
   
    
    
    return 0;
}
