Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada um deu para a realização da aposta. Faça um programa que lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.

Exemplo:

Aposta do 1o: 10

Aposta do 2o: 20

Aposta do 3o: 30

Premio: 120

Ganho do 1o: 20.00, pois 120 * 10 / 60 = 20

Ganho do 2o: 40.00, pois 120 * 20 / 60 = 40

Ganho do 3o: 60.00, pois 120 * 30 / 60 = 60

*Imprima os valores da saída com duas casas decimais. 

>> 10 

20 

30 

120 

<< 20.00 

40.00 

60.00

```c
#include <stdio.h>

int main (){

    /*lê cada investiu, valor prêmio,

    e escreve quanto cada um ganharia.*/

    float va1, va2, va3, vp, soma = 0;

    scanf("%f\n%f\n%f\n%f", &va1, &va2, &va3, &vp);

    soma = va1 + va2 + va3;

    va1 = (vp* va1)/soma;

    va2 = (vp* va2)/soma;

    va3 = (vp* va3)/soma;

    

    printf("%.2f\n%.2f\n%.2f\n", va1, va2, va3);

    

    return 0;

}


```
