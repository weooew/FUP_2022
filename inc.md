Defina a função void incrementa que recebe como parâmetros um ponteiro x e um número inteiro y. A função deve somar o valor de y ao valor de x.

O arquivo deve ter apenas essa função, não deve ter a função main.

void incrementa(int *x, int y);

Entrada: Dois valores inteiros x e y.

Saída: o valor de y somado ao valor de x.

Ex:
>>

5

25

<<

30

``` c
#include<stdio.h>
void incrementa(int *x, int y){
    //int a = *x + y;
    *x = *x + y;
    
}
```
