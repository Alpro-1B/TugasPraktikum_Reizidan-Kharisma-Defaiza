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
        cout << "\n\nFirst Value => 10 - Third Value = " << (firstValue-thirdValue);
        cout << "\nSecond Value => 8 + Third Value = " << (secondValue+thirdValue);

    // tanpa menggunakan variable tambahan
        cout << "\n\nFirst Value => 10 - 2 = " << (firstValue-2);
        cout << "\nSecond Value => 8 + 2 = " << (secondValue+2);

    return 0;
        
}
