#include <iostream>
using namespace std;
int main () {

    int firstValue = 10;
    int secondValue = 8;
    int thirdValue = 2;
    
    cout << "First Value = " << firstValue; 
    cout << "\nSecond Value = " << secondValue;
    cout << "\nThird Value = " << thirdValue;

    // menggunakan variable tambahan
        cout << "\n\nFirst Value => 10 - Third Value = " << (firstValue-thirdValue) << endl;
        cout << "Second Value => 8 + Third Value = " << (secondValue+thirdValue) << endl <<endl;

    // tanpa menggunakan variable tambahan
        cout << "First Value => 10 - 2 = " << (firstValue-2) << endl;
        cout << "Second Value => 8 + 2 = " << (secondValue+2) << endl;
        
}