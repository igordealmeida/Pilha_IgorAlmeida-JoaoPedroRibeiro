#include <stdio.h>
#include <stdlib.h>
#include "biblio_pilha.h" 

int main(){

    struct spilha p1, p2, p3;
    char nome[15];
    int i; 
    init(&p1);  
    init(&p2);
    init(&p3); 
    printf("\nA pilha aleatoria e: ");  
    for (i=0; i<=9; i++){ 
        push(&p1, rand() % 10); 
        printf("%d ", p1.vetor[i]);
    }
    for (i=9; i>=0; i--){ 
        if((p1.vetor[i]%2==0) || (p1.vetor[i]==0)){ 
            push(&p2,pop(&p1)); 
        }
        else{
            push(&p3,pop(&p1));
        }
    }
    printf("\nA pilha par e: ");
    for (i=0; i<=p2.topo -1; i++){ 
        printf("%d ", p2.vetor[i]);
    } 
    printf("\nA pilha impar e: ");
    for (i=0; i<=p3.topo -1; i++){
        printf("%d ", p3.vetor[i]);
    } 
    return 0;
}