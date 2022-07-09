Defina a função void swap que recebe como parâmetros dois ponteiros x e y e troca os valores das variáveis.

O arquivo deve ter apenas essa função, não deve ter a função main.

void swap(int *x, int *y);

Entrada: Dois valores de x e y

Saída: valores de x e y trocados.

Ex:
>>

5

25

<<

25

5
``` c
#include <stdio.h>
void swap(int *x, int *y){
    int a = *x;
    *x = *y;
    *y = a;
}
//modificação em vetor não fica só na função
//função (int v[], ...) -> para chamar função (nome vetor, ...)

```
