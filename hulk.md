## Motivação
Bruce Banner precisa comprar novas calças para quando ele vira o gigante Hulk.

## Ação
Conte quantas calças são MAIORES que o cós do Hulk para que ele possa vestir.

## Entrada:

1ª linha: Os números x  e n, em que x é o cós do Hulk e n a quantidade de calças que serão testadas.

2ª linha: Cós de cada calça a ser testada.

## Exemplo:

>>
5 3

2 3 6

<<
1

---
>>
2 4

1 1 1 1

<<
0

---
>>
2 8

2 4 2 6 2 0 2 2

<<
2
```c
#include<stdio.h>

int main(){

    /* 1ª linha: x (cós do Hulk)  e n (quantidade de calças que serão testadas)

2ª linha: Cós de cada calça a ser testada.*/

    int  x, n, s, i, qc = 0;

    scanf("%d %d/n", &x, &n);

    

        while(i < n){

            scanf("%d", &s);

                if (s > x){

                    qc = qc + 1;

                }

            i = i + 1;

        }

    printf("%d", qc);

    return 0;

}
```
