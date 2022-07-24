## Ação

Faça um programa que dado uma sequência de números, retorne quantas vezes um determinado elemento se repete nesta sequência.

## Entrada:

1ª linha: Os valores de x e n, em que x é o número que corresponde ao Ultron e n a quantidade de elementos da sequência de números.

2ª linha: Os elementos da sequência de números.

## Saída:

A quantidade de vezes que o elemento aparece na sequência de números.

## Exemplo:

>> 5 3 

2 3 6 

<< 0 

---
>> 0 4

0 0 1 0 

<< 3 

---
>> 2 8 

2 4 2 6 2 0 2 2 

<< 5
```c
#include<stdio.h>
int main(){
/*1ª linha: valores x (ultron) e n (quantidade de elementos da sequência) 
2ª linha: Os elementos da sequência de números.
Saída: quantidade de vezes que o elemento aparece na sequência de números.
    */
    int  x, n, s, i, qu = 0;
    scanf("%d %d/n", &x, &n);
    
        while(i < n){
            scanf("%d", &s);
                if (s == x){
                    qu = qu + 1;
                }
            i = i + 1;
        }
    printf("%d", qu);
    return 0;
}
```
