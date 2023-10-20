#include <iostream>
using namespace std;

int main () {

    //value awal dari variable 1 dan 2
    int firstValue = 10;
    int secondValue = 8;
    int thirdValue;
    cout<<"value awal dari variable 1 dan 2\nFirst Value = "<<firstValue<<"\nSecond Value = "<<secondValue;
    

        //penukaran nilai menggunakan variable tambahan    
        thirdValue = firstValue;
        firstValue = secondValue;
        secondValue = thirdValue;
        
        cout<<"\n\nValue dari variable 1 dan 2 setelah ditukar menggunakan variable tambahan\nFirst Value = "<<firstValue<<"\nSecond Value = "<<secondValue<<endl;

        //mengubah value dari variable 1 dan 2 seperti semula
        firstValue = 10;
        secondValue = 8;

        //penukaran value tanpa menggunakan variable tambahan
        firstValue = (firstValue+secondValue-firstValue);
        cout << "\nValue dari variable 1 dan 2 setelah ditukar tanpa menggunakan variable tambahan\nfirstValue = " << firstValue;

        //mengubah value dari variable 1 dan 2 seperti semula
        firstValue = 10;
        secondValue = 8;
        secondValue = (secondValue+firstValue-secondValue);
        cout << "\nSecond Value = " << secondValue;

    return 0;
        
}
