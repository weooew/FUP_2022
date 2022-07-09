O dono do zoológico quer a lista de todas as especies de animais
que existem no zoologico. Para isso ele te deu uma lista de todos
os animais.

Ele quer que você faça um programa que retorne a quantidade de espécies diferentes.
Considere que um número representa uma especie.

Não use uma função de ordenar pronta.

Entrada:

linha 1: um número com a quantidade de elementos do vetor ( 1 até 50)

linha 2: o vetor de inteiros

Saída: a quantidade de espécies

Exemplos:
>>
3

1 1 2

<<

2

---
>>
5

1 3 2 2 3

<<

3

---
>>
8

1 9 3 3 3 2 1 4

<<

5

``` c
#include <stdio.h>
int main(){
    int q = 0;
    scanf("%d", &q);
    int v[q];
    int x = q; 
    for(int a = 0; a < q; a++){
        scanf("%d", &q);
    }
    for(int b = 0; b < q; b++){
        for(int c = 0; c < q; c++){
            if (v[b] == v[c]){
                x = x - 1;
            }
        }
        
    }
    printf("%d", x);
    
    
    
    return 0;
}
```
