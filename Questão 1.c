#include <stdio.h>

int main() {
    int valores[10];
    
    // Lê os 10 valores de entrada
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }
    
    int tamanhoConjunto = 10;  // Inicialmente, há 10 elementos no conjunto
    
    // Imprime os valores de entrada
    for (int i = 0; i < tamanhoConjunto; i++) {
        printf("%d", valores[i]);
        if (i < tamanhoConjunto - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
    
    // Loop para gerar novos conjuntos até restar apenas um elemento
    while (tamanhoConjunto > 1) {
        int novoConjunto[10];  // Pode haver no máximo 10 elementos
        
        // Calcula o novo conjunto a partir do conjunto anterior
        for (int i = 0; i < tamanhoConjunto - 1; i++) {
            novoConjunto[i] = valores[i] + valores[i + 1];
        }
        
        tamanhoConjunto--;  // Reduz o tamanho do conjunto
        
        // Imprime os valores do novo conjunto
        for (int i = 0; i < tamanhoConjunto; i++) {
            printf("%d", novoConjunto[i]);
            if (i < tamanhoConjunto - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
        
        // Copia o novo conjunto para o vetor de valores
        for (int i = 0; i < tamanhoConjunto; i++) {
            valores[i] = novoConjunto[i];
        }
    }
    
    return 0;
}