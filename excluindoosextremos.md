## Motivação

Numa competição de salto ornamental, vários juízes atribuem uma nota para o salto. A maior e menor nota são descartadas e a pontuação do salto é a soma das notas restantes. 

## Ação

Leia uma sequência de valores, exclua o menor e o maior e mostre a soma dos valores restantes.

## Entrada:

A primeira linha é a quantidade de juízes.

As demais linhas são números inteiros representando as notas dos juízes.

## Saída:

A soma dos valores restantes (excluindo o menor e o maior)

## Exemplos
>>

5

1

3

4

5

2

<<

9

---
>>

6

1

8

1

2

3

4

<< 

10
```c
#include <stdio.h>
int main(){
    /*Leia uma sequência de valores, exclua o 
    menor e o maior e mostre a soma dos valores restantes.
    */
    int soma, nj, quantj, i, unj, maior; 
    int menor = 100;
    scanf("%d", &quantj);
    
    while (i < quantj){
        scanf("%d", &nj);
        soma = soma + nj;
            if (nj > maior){
                maior = nj;
            }
            //ñ gostei dessa solução
            if (nj < menor){
                menor = nj;
            }
            
        i = i + 1;
    }
    soma = soma - (menor + maior);
    printf("%d ", soma);
    
    return 0;
}
```
