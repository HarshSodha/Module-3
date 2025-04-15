#include <iostream>
using namespace std;

int main() {
    int size,i,j;

   
    cout << "Enter the Size : ";
    cin >> size;

   
    for( i = 1; i <= size; i++) {
       
        for( j = 1; j <= i; j++) {
            cout << "* ";
        }
        
      cout<<"\n";
    }

    return 0;
}
