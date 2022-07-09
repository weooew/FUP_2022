#include <stdio.h>
#include <string.h>
int main(){
/*Faça um programa que receba uma frase(max 100 char) e imprima a mesma frase com as 
palavras repetidas. Entrada só de minúsculas e espaços. Não existem espaços no 
começo ou no final da entrada. Não aparecem dois espaços juntos.

Quando terminar essa questão, talvez queira tentar a Nao se bububula nas questões de string.

>>ola planeta terra
<<ola ola planeta planeta terra terra


>>gosto de tomate
<<gosto gosto de de tomate tomate*/
    char string[100];
    int n = 0;
    scanf("%[^\n]", string);
    int tam = strlen(string);
    char str[tam];
    int j = 0;
    
    for(int x = 0; x <= tam; x++){
        if(string[x] != ' ' && string[x] != '\0'){
            str[j] = string[x];  
            j++;
        }
        else {
            str[j] = '\0';
            printf("%s %s ", str, str);
            j=0;
        }
    }
    //nao precisa do s
    return 0;
}
