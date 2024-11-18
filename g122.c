/*Shruti is an aspiring programmer who is learning about 2D arrays. She wants to explore the concept of matrix transposition, where the rows of a matrix become the columns and vice versa.



Can you help Shruti by providing a program that transposes a matrix? 

Input format :
The first line of input consists of two space-separated integers r and c, representing the row and column size of the matrix.

The next r lines consist of c space-separated integers, representing the elements of the matrix.

Output format :
The output prints the transpose of the given matrix.

*/

#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d", &rows);
    scanf("%d", &cols);

    int a[rows][cols], b[cols][rows];

    // Input the elements of the array 'a'
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose the array 'a' and store it in array 'b'
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            b[j][i] = a[i][j];
        }
    }

    // Display the transposed array 'b'
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
