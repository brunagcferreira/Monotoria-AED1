#include <stdio.h>
#include <stdlib.h>
#include "bubblesort.c"

int main(void){
    int tamanho, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vetor = (int *) malloc(tamanho * sizeof(int));

    for(i=0; i<tamanho; i++){
        printf("Digite o vetor: ");
        int temp;
        scanf("%d", &temp);
        vetor[i] = temp;
    }

    bubblesortwithboolean(vetor,tamanho);
    exibir(vetor, tamanho);
    free(vetor);

    return 0;
}