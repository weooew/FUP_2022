## Motivação

O seu professor de FUP está curioso para saber a média das notas da sua turma. Para isso, ele armazenou as notas e agora pede sua ajuda para implementar um programa que retorna a média aritmética das notas.

A média é a soma de todos os valores dividida pela quantidade de valores.

## Ação

Dada uma sequência de notas, calcule a média dos valores contidos nela.

## Entrada:

1ª linha: a quantidade de notas.2ª linha: as notas em ponto flutuante.

## Saída:

O valor da média com uma casa decimal.

## Exemplo:

>> 1 

1.0 

<< 1.0

---
>> 3 

1.0 2.0 3.0 

<< 2.0 

---
>> 4 

2.0 2.0 2.0 2.0 

<< 2.0 

---
>> 3 

5.0 3.0 7.0 

<< 5.0

```c
#include <stdio.h>

int main(){

    float n, m = 0;

    int i, qn = 0;

    scanf("%d", &qn);

    

    while(i < qn){

        scanf("%f", &n);

        m = m + n;

        i++;

    }

    

    m = m * (float) 1/qn;

    printf("%.1f", m);

    return 0;

}
```
