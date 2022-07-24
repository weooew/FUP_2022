## Descrição
Faça uma função chamada primo que recebe um inteiro positivo n e retorna 1 (verdadeiro) se n é primo, ou 0 (falso) caso contrário. Um número inteiro é primo quando é divisível apenas por 1 e por ele mesmo.

Uma estratégia simples para testar se um número n é primo consiste em procurar um divisor de n do número 2 até o número n-1. Se algum valor nesta faixa é divisor do n, então n não é primo. Caso contrário, n é primo.

Note que a função pode retornar 0 assim que encontrar um divisor de n entre 2 e n-1. Ou seja, não é necessário retornar apenas no final da função.

Na função main, leia dois inteiros positivos A e B, com A <= B, e imprima todos os primos de A até B. Portanto, use a função primo dentro da função main.

## Entrada:

1a linha: valor do inteiro positivo A.

2a linha: valor do inteiro positivo B (com A <= B).
## Saída:

Todos os primos de A até B (um por linha).

## Exemplos
>>
3
11
<<
3
5
7
11

---
>>
4
10
<<
5
7

```c
#include <stdio.h>
#include <math.h>

int primo(int n){
    int i = 2;
    while(i<n){
        if(n%i == 0){
        return 0;    
        }
        i++;
    }
    return 1;
}
int main(){
    int a,b = 0;
    scanf("%d %d", &a, &b);
    if(a < b){
        while(a <= b){
            if(primo(a) == 1){
                printf("%d\n", a);
            }
            a++;
        }
    }
    return 0;
}
```
