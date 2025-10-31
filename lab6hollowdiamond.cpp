#include <iostream>
using namespace std;
//Using for loop to print a full pyramid
int main() {
   for (int i=1; i<=5; i++){
         for (int j=1; j<=5-i; j++) {
                cout << " ";
         }
         for (int k=1; k<=i; k++) {
                if (k==1 || k==i) {
                   cout << " *";
                } else {
                   cout << "  ";
                }
         }
         cout << endl;  // Move to the next line after each row
   }
   for (int i=5; i>=1; i--){
         for (int j=1; j<=5-i; j++) {
                cout << " ";
         }
         for (int k=1; k<=i; k++) {
                if (k==1 || k==i) {
                   cout << " *";
                } else {
                   cout << "  ";
                }
         }
         cout << endl;  // Move to the next line after each row
   }

    return 0;
}