#include <stdio.h>
#include <stdlib.h>
#include "biblio_pilha.h" 

int main(){

    struct spilha p1;
    int i, numero; 
    init(&p1);   
    printf("\nEntre com o número desejado para converter para binario: "); 
    scanf("%d", &numero);   
    while (numero != 0){ 
        if(numero%2 == 0){
            push(&p1, 0); 
        }
        else{
            push(&p1, 1);
        }
        numero = numero/2;
    }
    printf("\nO numero em: ");
    for (i=p1.topo-1; i>=0; i--){ 
        printf("%d ", p1.vetor[i]);          
    }
    return 0;
}