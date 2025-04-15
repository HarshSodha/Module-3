#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of elements: ";
    cin >> n;

    
    int arr[n];

  
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

   
    double average = static_cast<double>(sum) / n;

    
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}

