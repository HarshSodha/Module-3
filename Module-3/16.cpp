#include <iostream>
using namespace std;

int main() {
    
    int matrix1[2][2], matrix2[2][2], result[2][2];

    
    cout << "Enter elements for the first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

  
    cout << "\nEnter elements for the second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

 
    cout << "\nResult of matrix addition:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

