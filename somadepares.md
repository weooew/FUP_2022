## Motivo
Pai, a tia falou que na arca de noé os animais entravam aos pares. O que é pares papai?

Pares são números que formam um casalzinho, tipo 2 passarinhos, mas também vale pra vários pares como 4, 6, 8, 10, etc.

Papai, e se não tiver nenhum passarinho pra botar na arca, 0 é par?

## Ação
Some todos os números inteiros pares que estão entre A e B, inclusive.

Zero é par?:
Descubra em http://www.profcardy.com/cardicas/tirateima.php?id=1

## Entrada:

Dois números inteiros A e B.
## Saída:

A soma de todos os números pares, ou "invalido" caso B seja menor que A.
## Exemplo:

>>
1

10

<<
30

---
>>
1

5

<<
6

---
>>
5

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
#include<stdio.h>

int main(){

    int  a, b, soma, i = 0;

    scanf("%d %d", &a, &b);

    i = a;

    if(b >= a){

        while(i <= b){

                if (i % 2 == 0){

                    soma = soma + i;

                }

            i = i + 1;

        }

    printf("%d", soma);

    }

    

    else if (b < a) {

        printf("invalido");

    }

    return 0;

}
```
