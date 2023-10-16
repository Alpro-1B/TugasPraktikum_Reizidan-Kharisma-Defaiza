#include <iostream>
using namespace std;

int main () {

    int totalBebek =13;
    int totalTeman = 5;
    int sisaBebek = totalBebek % totalTeman ;

    cout << "Jumlah bebek Tatang = " << totalBebek;
    cout << "\nBanyak teman Tatang = " << totalTeman; 

        cout << "\n\nTiap teman akan mendapatkan " << (totalBebek/totalTeman) << " ekor bebek.\n";
        cout << "Setelah bebek dibagikan akan tersisa " << sisaBebek << " ekor bebek.";

    return 0;
}