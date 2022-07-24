## Ação

Some todos os números inteiros positivos de A até B.


## Entrada:

Dois números inteiros A e B.

## Saída:

A soma de todos os números de A até B (incluindo o A e o B na soma), ou "invalido" caso A seja maior do que B.

## Exemplo:

>> 1 

10 

<< 55 

---
>> 1 

6 

<< 21 

---
>> 10 

5 

<< invalido 

---
>> 5 

5 

<< 5
```c
#include <stdio.h>

int A, B, soma, i;

int main (){

    scanf("%d %d", &A, &B);

    i = A;

    soma = A;

    if (A == B){

        printf("%d", A);

    }

    else if (A<B){

        while(i < B){

        i = i + 1;

        soma = soma + i;

        }

        printf("%d", soma);

    }

    else {

        printf("invalido");

    }

    return 0;

}


```
