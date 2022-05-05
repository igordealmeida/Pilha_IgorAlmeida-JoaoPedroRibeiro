#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "biblio_pilha.h" 

int main(){

    struct spilha p1;  
    char nome[100], nomeinverso[100]; 
    int i;
    printf("\nInsira a palavra que deseja analisar: ");
    scanf(" %[^\n]s", nome);     
    init(&p1);   
    push(&p1, '\0');      
    for (i=0; i<=strlen(nome)-1; i++){  
        push(&p1, nome[i]); 
    }
    for (i=0; i<=strlen(nome); i++){
        nomeinverso[i] = pop(&p1);
    }
    printf("\no nome original e: %s\n",nome); 
    printf("\n o nome invertido e: %s\n",nomeinverso);                                        
    if(strcmp(nome,nomeinverso)==0){ 
        printf("\nA palavra e palindroma\n");
    }  
    else{
        printf("\nA palavra nao e palindroma\n");    
    }
    return 0;
}