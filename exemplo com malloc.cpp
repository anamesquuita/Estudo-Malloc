#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, i, n;

    printf("Insira um tamanho para seu vetor: ");
    scanf("%d", &n);

    p = (int*)malloc(n * sizeof(int));
    if (!p) { // Verifica se alocação deu certo
        printf("Sem memoria.\n");
        return 1; 
    }

    printf("Vetor preenchido com numeros aleatorios:\n");
    for (i = 0; i < n; i++) {
        p[i] = rand() % 100; // coloca número aleatório
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);

    return 0;
}

