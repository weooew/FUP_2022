Descrição
Pedro e João foram no Silvio Santos. O programa era aquele que o Silvio mostrava um produto do mercantil e a pessoa que chegasse mais próximo do preço real ganhava.

O objetivo do seu programa é informar quem ganhou a disputa. Você receberá o valor do produto e o valor do chute de cada jogador. O jogador que chegar mais perto ganha.

Se ambos ficarem a mesma distancia do valor real, então houve empate.

---
Entrada:

linha 1: o valor do produto.(valor inteiro entre 1 e 100)

linha 2: o chute do Primeiro

linha 3: o chute de Segundo

---
Saida:
"primeiro" se o chute do Primeiro for o mais próximo do valor do produto

"segundo" se o chute do Segundo for o mais próximo do valor do produto

"empate" caso ambos ficarem à mesma distancia

Exemplos
>>
1

2

3

<<
primeiro

---
>>
3

5

4

<<
segundo

---
>>
10

11

9


<<
empate

---
>>
20

21

22

<<
primeiro

---
>>
20

21

21

<<
empate
```c
#include <stdio.h>

int main (){

    int prim, seg, preco= 0;

    int dif1, dif2 = 0;

        scanf("%d %d %d", &preco, &prim, &seg);

if (prim > preco) {

dif1 = prim - preco;

}

if (prim < preco) {

dif1 = preco - prim;

}

if (prim == preco) {

 dif1 = preco - prim;

}

if (seg > preco) {

dif2 = seg - preco;

}

if (seg < preco) {

dif2 = preco - seg;

}

if (seg == preco) {

dif2 = preco - seg;

}

    

    if (dif1 < dif2){

        printf("primeiro");    

    }

    

    if (dif2 < dif1){

        printf("segundo");    

    } 

    

    if (dif1 == dif2){

        printf("empate");    

    } 

    

    return 0;

} 
```
