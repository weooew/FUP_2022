## Motivação

Vários competidores disputaram uma competição interessante. Eles tinham duas pedras para lançar. 
Chamemos de pedra A e pedra B. Eles tinham que arremessar ambas as pedras a pelo menos 10 metros de distância. 
Ganhava a competição, o competidor que arremessou as duas além da linha de 10 m o mais próximo possível uma da outra. 
Se alguma das pedras tiver distância menor que 10 metros, o competidor estará desclassificado.

## Entrada:

O número N de competidores na primeira linha. Cada uma das linhas subsequentes terá a distância das pedras A e B.

## Saída:

O número do competidos vitorioso. O primeiro competidor tem número 0. Caso haja empate, mostre o de menor número. 
Se ninguém ganhar o jogo, porque nao conseguiram lançar as bolas além dos 10 metros, imprima "sem ganhador"

## Exemplos
>>

2

8 11

10 15

<<

1

---
>>

3

12 15

16 14

10 9

<<

1

---
>>

2

10 8

9 13

<<

sem ganhador
```c
#include <stdio.h>

int main(){

    int n, a, b, dif = 0;

    int menordif = -1;

    int ganhador = 0;

    int menora = 0, menorb =0;

    scanf("%d", &n);

    

    for(int i = 0; i < n; i++){

        scanf("%d %d",&a, &b);

        if(a >= 10 && b >= 10){

            if(a >= b){

                dif =  a - b;

            }

            if(b > a){

                dif = b - a;

            }

            

            if(menordif == -1 || dif < menordif){

                menordif = dif;

                menora = a;

                menorb = b;

                ganhador = i;

            }

            if(menordif != -1 && dif == menordif){

                if(menora + menorb > a+b){

                menordif = dif;

                ganhador = i;

                }

            }

        }

    }

    if(menordif != -1){

        printf("%d", ganhador);

    }

    else{

        printf("sem ganhador");

    }

    

    return 0;

}


```
