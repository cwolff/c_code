#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ** readMatrix(int, int);
    void printMatrix(int **, int, int);
    void mirrorMatrix(int **, int, int);
    void findMaxMin(int **, int, int, int[], int[]);
    void findMax(int **, int, int, int[]);
    void findMin(int **, int, int, int[]);  


    int m,n; /* nuber of rows and columns of matrix*/

    printf("Enter numbmer of rows and columns of the matrix - rows columns:");
    scanf("%d %d",&m, &n); /* input for rows and colums*/

    int **Matrix; /* point to matrix */
    Matrix = readMatrix(m, n); /* read number of rows and number of columns */

    // mirrorMatrix(M,m,n);
    int max[m], min[n];

    //findMaxMin(Matrix, m, n, max, min);
    findMax(Matrix, m, n, max); /* find max value for each row */
    findMin(Matrix, m, n, min); /* find mim value for each column */

    printMatrix(Matrix, m, n);

    for(int i = 0; i < m; i++)
        printf("Maxium of row #%d is %d\n", i, max[i]);

    for(int j = 0; j < n; j++)
        printf("Minimum of column #%d is %d\n", j, min[j]);

    return 0;
}

int ** readMatrix(int m, int n) {
    int row, col;
    int **A = (int **)malloc(m * sizeof(int *));

    printf("**A = \'%p\'\n", &*A);

    for(row = 0; row < m; row++) {
        A[row] = (int *) malloc(n * sizeof(int));
        // printf("A[%i] = %p\n", row, A[row]);
    }

    for(row = 0; row < m; row++) 
        for(col = 0; col < n; col++) {
            printf("[%i][%i] = ", row, col);
            scanf("%i", &A[row][col]);
            // printf("&A[%i][%i] = %p\n", row, col, &A[row][col]);
        }

    return A;
}

void printMatrix(int **A, int m, int n) {
    int row, col;
    for(row = 0; row < m; row++) {
        for (col = 0; col < n; col++)
            printf("%5d",A[row][col]);
        printf("\n");
    }
}

/*
void mirrorMatrix(int **A, int m, int n) {
    int tmp;
    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n / 2; j++) {
            tmp = A[i][j];
            A[i][j] = A[i][n - 1 - j];
            A[i][n - 1 - j] = tmp;
        }
    }
}
*/

void findMaxMin (int **A, int m, int n, int max[], int min[]) {
    int row, col;

    for(row = 0; row < m; row++ ) {
        max[row] = A[row][0];

        for(col = 0; col < n; col++)
            if(A[row][col] > max[col])
                max[row] = A[row][col];
    }

    for(col = 0; col < n; col++) {
        min[col] = A[0][col];

        for (row = 0; row < m; row++)
            if(A[row][col] < min[col])
                min[col] = A[row][col];
    }
}

void findMax(int **A, int m, int n, int max[]) {
    int row, col;

    for(row = 0; row < m; row++ ) {
        max[row] = A[row][0];

        for(col = 0; col < n; col++)
            if(A[row][col] > max[col])
                max[row] = A[row][col];
    }
}

void findMin(int **A, int m, int n, int min[]) {
    int row, col;

    for(col = 0; col < n; col++ ) {
        min[col] = A[0][col];

        for(row = 0; row < m; row++)
            if(A[row][col] < min[col])
                min[col] = A[row][col];
    }
}