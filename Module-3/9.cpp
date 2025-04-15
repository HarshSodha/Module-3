#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    
    srand(time(0));
    
    
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int maxAttempts = 10;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "You have " << maxAttempts << " attempts to guess it." << endl << endl;
    
  
    do {
        cout << "Enter your guess (" << maxAttempts - attempts << " attempts left): ";
        cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            cout << "Too low! Try a higher number." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try a lower number." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
            break;
        }
        
        if (attempts >= maxAttempts) {
            cout << "Game over! You've used all your attempts." << endl;
            cout << "The secret number was: " << secretNumber << endl;
            break;
        }
        
    } while (guess != secretNumber);
    
    return 0;
}
