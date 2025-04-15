#include <iostream>
#include <string> 
using namespace std;

int main() {
    
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;
    const char GRADE = 'A';
    
    
    int age = 25;
    int temperature = -10;
    int score1 = 90, score2 = 85;
    
    
    float weight = 68.5f;
    double distance = 384.4e6; 
    
    
    char initial = 'J';
    char newline = '\n';
    
    
    bool isRaining = true;
    
   
    string name = "John Doe";
    
   
    int totalScore = score1 + score2;
    float averageScore = (score1 + score2) / 2.0f;
    double circleArea = PI * 10.0 * 10.0; 
    bool isPassing = (averageScore >= 60);
    
   
    
    cout << "Name: " << name << endl;
    cout << "Initial: " << initial << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Distance to Moon: " << distance << " meters" << endl;
    cout << "Is raining? " << boolalpha << isRaining << endl;
    
    
    cout << "Total score: " << totalScore << endl;
    cout << "Average score: " << averageScore << endl;
    cout << "Area of circle (r=10): " << circleArea << endl;
    cout << "Is passing grade? " << isPassing << endl;
    
  
    cout << "PI: " << PI << endl;
    cout << "Days in week: " << DAYS_IN_WEEK << endl;
    cout << "Target grade: " << GRADE << endl;
    
   
    age += 1; 
    weight -= 2.5; 
    isRaining = false;
    
    cout << "\nUpdated Values" << endl;
    cout << "New age: " << age << endl;
    cout << "New weight: " << weight << endl;
    cout << "Still raining? " << isRaining << endl;
    
   
    
    return 0;
}
