#include <iostream>
using namespace std;


int globalVar = 10;

void function1();
void function2(int x);

int main() {
    
    int localVarMain = 5;
    
    
    cout << "globalVar: " << globalVar << endl;
    cout << "localVarMain: " << localVarMain << endl << endl;
    
    function1();
    
    
    cout << "globalVar: " << globalVar << endl;
    cout << "localVarMain: " << localVarMain << endl << endl;
    
    function2(localVarMain);
    
    cout << " Final check in main() " << endl;
    cout << "globalVar: " << globalVar << endl;
    cout << "localVarMain: " << localVarMain << endl;
    
    return 0;
}

void function1() {
   
    int localVarFunc1 = 15;
    
    
    cout << "globalVar: " << globalVar << endl;
    
    cout << "localVarFunc1: " << localVarFunc1 << endl << endl;
    
   
    globalVar = 20;
}

void function2(int x) {
    
    int localVarFunc2 = 25;
    
    cout << " In function2() " << endl;
    cout << "globalVar: " << globalVar << endl;
    cout << "Parameter x: " << x << endl;
    cout << "localVarFunc2: " << localVarFunc2 << endl << endl;
    

    x = 30;
    cout << "Modified parameter x: " << x << endl;
}
