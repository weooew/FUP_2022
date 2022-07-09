Uma palavra é anagrama de outra se é formada pelas mesmas letras nas mesmas QUANTIDADES, mas em qualquer ordem.
Dadas duas palavras, imprima sim se elas são anagramas e não se não sao anagramas.

Regras:
Entrada: 2 palavras, uma por linha, apenas caracteres minusculos e sem espaços.
Saida deve ser apenas "sim" ou "nao"

Ex:
>>
rocicleia
licioreca
<<
sim

---
>>
batata
tabata
<<
sim

---
>>
borboleta
brobuleta
<<
nao

---
>>
amor
roam
<<
sim

---

>>
paralelepipedo
pepidoelelapar
<<
sim

```c
#include <stdio.h>
#include <string.h>
//conta quantos caracteres c existem
int contarchar(char str[], char c){
    int soma = 0;
    for(int i = 0; i< strlen(str); i++){
        if(str[i] == c){
           soma = soma + 1; 
        }
    }
    return soma;
}
int main(){
    char s1[30];
    char s2[30];
    scanf("%s", s1);
    scanf("%s", s2);
    if(strlen(s1) != strlen(s2)){
        printf("nao\n");
        return 0;
    }
    for(int i = 0; s1[i] != '\0'; i++){
        if(contarchar(s1, s1[i]) != contarchar(s2, s1[i])){
            printf("nao\n");
            return 0;
        }
    }
    printf("sim\n");
    return 0;
}
```
