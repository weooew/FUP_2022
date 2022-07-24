Não sei se você amava ou odiava o tal do Bhaskara por inventar aquela fórmula das 
raízes.  Agora é hora de implementar aquela conta pra nunca ter mais que fazer na 
mão.

Ação: Defina a função bhaskara que deve receber como parâmetros três números reais a, b e c e dois ponteiros *x1 e *x2 e deve retornar : -1 se a equação não tem raízes reais; 0 se tem somente uma raiz real e; 1 se a equação tem duas raízes reais distintas.

O arquivo deve ter apenas essa função, não deve ter a função main:

int bhaskara(double a, double b, double c, double *x1, double *x2);

Entrada: Três valores a, b e c representando os coeficientes de uma equação de 2° grau.
Saída: 1a linha: -1 se a equação não tem raízes reais; 0 se tem somente uma raiz real 
e e o valor da raíz ou; 1 se a equação tem duas raízes reais distintas.

demais linhas: os valores das raízes (se existir)

Ex:
>>

5.4

25.0

-12.0

<<

1

0.44

-5.07

``` c
#include <stdio.h>

#include <math.h>

int bhaskara(double a, double b, double c, double *x1, double *x2){

    int delta = pow(b,2) - (4*a*c);

    if(delta >= 0){

        if(sqrt(delta) == (-1*sqrt(delta))){

            *x1 = ((b*-1)+sqrt(delta))/(2*a);

            return 0;

        }

        if(sqrt(delta) != (-1*sqrt(delta))){

            *x1 = ((b*-1)+sqrt(delta))/(2*a);

            *x2 = ((b*-1)-sqrt(delta))/(2*a);

            return 1;

        }

    }

    return -1;

}
```
