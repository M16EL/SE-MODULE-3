//WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array

#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols], char name);
void printMatrix(int rows, int cols, int matrix[rows][cols]);
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]);

int main() {
    int rows, cols;

    
    printf("Enter the number of rows and columns for matrices A and B: ");
    scanf("%d %d", &rows, &cols);

    int matA[rows][cols], matB[rows][cols], result[rows][cols];

    inputMatrix(rows, cols, matA, 'A');
    inputMatrix(rows, cols, matB, 'B');

    addMatrices(rows, cols, matA, matB, result);
    printf("Matrix Addition Result:\n");
    printMatrix(rows, cols, result);

    subtractMatrices(rows, cols, matA, matB, result);
    printf("Matrix Subtraction Result:\n");
    printMatrix(rows, cols, result);

    
    int rows2, cols2;
    printf("Enter the number of rows and columns for matrix C: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols != rows2) {
        printf("Matrix multiplication not possible with given dimensions.\n");
        return 1;
    }

    int matC[rows2][cols2], resultMul[rows][cols2];
    inputMatrix(rows2, cols2, matC, 'C');

    multiplyMatrices(rows, cols, matA, rows2, cols2, matC, resultMul);
    printf("Matrix Multiplication Result:\n");
    printMatrix(rows, cols2, resultMul);

    return 0;
}

void inputMatrix(int rows, int cols, int matrix[rows][cols], char name) {
    printf("Enter elements of matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d] = ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}


