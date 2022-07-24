## Descrição

Dada uma temperatura em graus Fahrenheit, podemos convertê-la para graus Celsius usando a fórmula abaixo:

Celsius = (Fahrenheit - 32) * 5 / 9

Faça uma função chamada converte_para_celsius que recebe uma temperatura em Fahrenheit e retorna esta temperatura graus Celsius.

Na função main, leia uma temperatura em graus Fahrenheit (ponto flutuante) e imprima o valor desta temperatura em Celsius. Para isso chame a função converte_para_celsius.


## Entrada:

Temperatura em graus Fahrenheit (ponto flutuante).

## Saída:

Temperatura em graus Celsius.

## Exemplos
>> 70 << 21.111111 

---
>> 60.5 << 15.833333

```c
#include <stdio.h>

float converte_para_celsius(float f){
    float c  = (f - 32)*5 / 9;
    return c;
}
int main (){
    float fa, ce;
    scanf("%f", &fa);
    ce = converte_para_celsius(fa);
    printf("%.2f", ce);
    
    return 0;
}
```
