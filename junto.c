#include <stdio.h> 
#include <string.h>
int main(){
  /* Receba um texto (máximo 100 caracteres) com letras minúsculas, números, espaços 
e os caracteres (tokens) '#' e ';', que separam as frases neste texto.
Separe o texto em frases substituindo os tokens ('#' e ';') por '\n'.*/
  
    char matheus[100];
    scanf("%[^\n]s", matheus);
    
    
    
    
    for(int i = 0; i<strlen(matheus); i++){
        if((matheus[i] == '#') || (matheus[i] == ';')){
            printf("\n");
            
        }
    else printf("%c", matheus[i]);
    }
    
    
    return 0;
}
