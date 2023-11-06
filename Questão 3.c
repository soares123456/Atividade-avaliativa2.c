#include <stdio.h>

void printMatrix(int matrix[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrixA[4][4];
    int matrixB[4][4];
    int resultMatrix[4][4];
    char operation[5];

    // Ler os valores da primeira matriz (A)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Ler os valores da segunda matriz (B)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Ler a operação a ser realizada
    scanf("%s", operation);

    // Realizar a operação escolhida
    if (strcmp(operation, "soma") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }
    } else if (strcmp(operation, "sub") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
            }
        }
    } else if (strcmp(operation, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultMatrix[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }
    }

    // Imprimir a matriz resultante
    printMatrix(resultMatrix);

    return 0;
}