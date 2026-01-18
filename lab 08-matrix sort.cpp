#include <iostream>
using namespace std;
int main() { int rows, cols;
   cout << "Enter the number of rows: "; cin >> rows;
 cout << "Enter the number of columns: "; cin >> cols;
    int matrix[100][100];
       cout << "Enter the elements of the matrix:" << endl;
   for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) { cin >> matrix[i][j]; } }
      for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
 if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                } } } } cout << "Matrix after sorting each row:" << endl;
    for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        } cout << endl;
    } return 0;
}
