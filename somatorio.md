## Motivação
Marilurdes tem muitos muitos pares de sapatos. Só que vários deles ela compartilha com as irmãs Arilúcia e Barisilene. Quantos pares de sapato são divisíveis pelas 3 entre Arilúcia e Barislene?

## Ação
Some todos os números inteiros pares que são divisíveis por 3 que estão entre A e B, inclusive.

## Entrada:
Dois números inteiros A e B.
## Saída:
A soma de todos os números pares divisíveis por 3, ou "invalido" caso A seja maior que B.
## Exemplo:

>>
1

20

<<
36

---
>>
1

10

<<
6

---
>>
10

1

<<
invalido

---
>>
6

6

<<
6
```c
#include <stdio.h>
int main (){
    int A, B, i, mult;
    scanf("%d %d", &A, &B);
    i = A;
    if (A <= B){
        while(i < B){
        i = i + 1;
            if((i % 2 == 0) && (i % 3 == 0)){
            mult = mult + i;
            }
            if ((A % 2 == 0) && (A % 3 == 0)){
            mult = mult + A;
            }
        }
            if ((A == B) && (A % 2 == 0) && (A % 3 == 0)){
            mult = A;
            }    
        printf("%d", mult);
    }
    
    else {
        printf("invalido");
    }
    
    return 0;
}
```
