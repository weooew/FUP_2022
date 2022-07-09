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
int bhaskara(double a, double b, double c, double *x1, double *x2){
    int e = 0;
    int delta = (b*b)-(4*a*c);
    //raiz de delta
    for(int d = 0; d < (b*b); d++){
        if(d*d == delta){
            raiz = d;
        }
    }
    int res1 = (-b + delta)/(2a);
    int res2 = (-b - delta)/(2a);
    if(delta > 0){
        //colocar res1 no x1
            if ((x*x) == res1){
                *x1 = x;
            } 
        
        //colocarres2 no x2
                *x2 = i;
        return 1;
    }
    if(delta == 0){
                *x1 = d;

        return 0;
    }
    if(delta < 0){
        return -1;
    }
    return 0;
}
```
