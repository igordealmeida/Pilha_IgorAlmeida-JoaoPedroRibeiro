#include <stdio.h>
#include <stdlib.h>
#include "biblio_pilha.h" 

int main(){

  struct spilha x, y, z; 
  int i;

    init(&x);
    init(&y);
    init(&z);
    printf("Executando operacao \n");

    push(&x,'A'); 
    push(&x,'B'); 
    push(&x,'C');
    push(&x,'D');
    push(&y,pop(&x));
    push(&y,pop(&x)); 
    push(&y,pop(&x));
    push(&z,pop(&x));
    push(&x,pop(&y));
    push(&z,pop(&y));
    push(&z,pop(&x));
    push(&z,pop(&y));

    printf("\nPercorrendo a x \n");

    for (i=z.topo-1; i>=0; i--){
        printf("%c\n",z.vetor[i]);  
        }
    return 0;
}