#include <iostream>
using namespace std;
int main () {

    int firstValue = 10;
    int secondValue = 8;
    int thirdValue = 2;
    
    cout << "First Value = " << firstValue << endl; 
    cout << "Second Value = " << secondValue << endl <<  endl;

    // menggunakan variable tambahan
        cout << "First Value - Third Value = " << (firstValue-thirdValue) << endl;
        cout << "Second Value + third Value = " << (secondValue+thirdValue) << endl <<endl;

    // tanpa menggunakan variable tambahan
        cout << "First Value - 2 = " << (firstValue-2) << endl;
        cout << "Second Value + 2 = " << (secondValue+2) << endl;
        
}