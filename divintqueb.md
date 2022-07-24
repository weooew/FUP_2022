## Divisão Inteira e Quebrada
Uma imagems mostrando onde fica o divisor, o quociente e o resto da divisão inteira.
## Motivação
5a série do ensino fundamental. O professor me prometeu muito poder. Disse que se aprendesse sua técnica especial secreta passada apenas de geração em geração para os escolhidos, eu nunca mais teria que pensar em quociente e resto. Seria um número apenas e apenas um. Uma divisão teria dois números entrando e apenas um número saindo. Seria um sonho né? O professor só esqueceu de me avisar que agora ia ter uma tal duma vírrrrrgula e as vezes muuuuuitos números depois dela.

## Ação
Aprenda a fazer divisão inteira e "quebrada".

## Entrada e Saída
Entrada: Dois valores inteiros do usuário, n1 e n2, um por linha.

Saída: O resultado da divisão inteira de n1 por n2, o resto da divisão inteira e o resultado da divisão quebrada com 2 casas decimais.

## Exemplo
>>
6

3

<<
2

0

2.00

---
>>
7

3

<<
2

1

2.33
---
Exemplo para imprimir o valor com duas casas decimais:


float num = 4.3243255;

printf("%.2f", num); // imprime na tela 4.32
```c
#include <stdio.h>

int main(){

    int n1, n2;

    scanf("%d\n %d", &n1, &n2);

    printf("%d\n%d\n%.2f\n", n1/n2, n1%n2, (float)n1/(float)n2);

    return 0;

}
```
