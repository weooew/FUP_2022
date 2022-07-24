## Ação

Encontre o menor de 5 números usando comando de repetição. Ou seja, para cada iteração da repetição leia o próximo número e teste se ele é o menor encontrado até então.

## Entrada:

5 valores inteiros um por linha.

## Saída:

O menor valor inteiro lido.

## Exemplo:

>> 1 4 2 5 2 << 1 

>> 4 2 6 8 3 << 2 

>> 4 7 6 4 3 << 3

```c
#include <stdio.h>

int main(){

    int i = 0;

    int v, m = 200;

            while(i < 5){

                scanf("%d", &v);

                    if (v < m){

                        m = v;

                    }

                i = i + 1;

            }

            printf("%d", m);

    return 0;

}
```
