## Motivação

No jogo de amarelinha é necessário jogar a pedrinha no número certo. Não vale jogar no número maior nem no número menor. Pra ficar mais divertido, dois amigos decidiram reformular as regras do jogo permitindo jogar a pedrinha dentro do intervalo estabelecido.

Funcionava, assim: João, joga, é tua vez. Entre 6 e 8. Vai!

## Ação

Dado uma sequência de números e um intervalo, calcule quantas vezes um número cai dentro do intervalo fechado. Em um intervalo fechado, os valores inferior e superior também fazem parte do intervalo.

## Entrada:

1a linha:  a quantidade n de números, o limite inferior e o limite superior do intervalo.

2a linha: a sequência de n números.

## Saída:

quantos números estão dentro do intervalo, incluindo os limites inferior e superior.

## Exemplos
>>

4 1 3

1 5 3 7

<<

2

---
>>

5 3 5

1 2 4 6 8

<<

1
```c
#include <stdio.h>
int main (){
    int i, quantn, inf, sup, n, soma = 0;
    /* 1° -> quant. n de números, inf e sup
    2° sequencia de n numeros
    saída quant números estão dentro do intervalo (inferior e superior)
    */
    scanf("%d %d %d\n", &quantn, &inf, &sup);
    
    while(i < quantn){
        scanf("%d", &n);
            if (inf <= n && n <= sup){
            soma = soma + 1;   
            }
        i++;
    }
    printf ("%d", soma);
    return 0;
}
```
