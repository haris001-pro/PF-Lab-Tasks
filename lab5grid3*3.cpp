#include <iostream>
using namespace std;
//Using for loop to print a 3x3 grid
int main() {
   for (int i=1; i<=3; i++){
         for (int j=1; j<=3; j++) {
                cout << "*";
         }
         cout << endl;  // Move to the next line after each row
   }

    return 0;
}