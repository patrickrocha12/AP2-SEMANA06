//Ex 07
#include <stdio.h>

void multiplicacao_matrizes(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n = 3, m = 2, p = 4;
    int A[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int B[2][4] = {{7, 8, 9, 10}, {11, 12, 13, 14}};
    int C[3][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    multiplicacao_matrizes(n, m, p, A, B, C);

    printf("Matriz resultante:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}