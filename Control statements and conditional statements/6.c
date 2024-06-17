//WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array

#include <stdio.h>

void add_matrices(int A[2][2], int B[2][2], int C[2][2]);
void subtract_matrices(int A[2][2], int B[2][2], int C[2][2]);
void multiply_matrices(int A[2][2], int B[2][2], int C[2][2]);
void display_matrix(int matrix[2][2]);

int main() {
    int A[2][2], B[2][2], C[2][2];

    printf("Enter elements of matrix A (2x2):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B (2x2):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &B[i][j]);

    printf("Sum of matrices A and B:\n");
    add_matrices(A, B, C);
    display_matrix(C);

    printf("Difference of matrices A and B:\n");
    subtract_matrices(A, B, C);
    display_matrix(C);

    printf("Product of matrices A and B:\n");
    multiply_matrices(A, B, C);
    display_matrix(C);

    return 0;
}

void add_matrices(int A[2][2], int B[2][2], int C[2][2]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void subtract_matrices(int A[2][2], int B[2][2], int C[2][2]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void multiply_matrices(int A[2][2], int B[2][2], int C[2][2]) {
    C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
}

void display_matrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}


