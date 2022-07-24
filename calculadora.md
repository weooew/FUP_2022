## Motivação

"Pode usar a calculadora na prova de FUP?!"

## Ação

Leia dois números inteiros, representando os números a serem computados, e um número inteiro representando a operação a ser realizada: (1) para soma, (2) para subtração, (3) para multplicação e (4) para divisão. Imprima na tela o resultado.

Leia do usuário dois valores inteiro um valor inteiro para a operação ('1', '2', '3' ou '4')

Imprima o resultado da operação em inteiro. Se a operação não pode ser realizada, imprima "invalida".

Exemplos

>> 5 2 4 

<< 2 

---
>> 3 5 1 
<< 8 

---
>> 5 0 4 
<< invalida

```c
#include <stdio.h>
int main(){
    int a, b, c, r = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    if(c == 1){
        r = a+b;
        printf("%d", r);
    }
    else if(c == 2){
        r = a-b;
        printf("%d", r);
    }
    else if(c == 3 && b != 0){
        r = a*b;
        printf("%d", r);
    }
    else if(c == 4 && b != 0){
        r = a/b;
        printf("%d", r);
    }
    else{
        printf("invalida");
    }
    return 0;
}

```
