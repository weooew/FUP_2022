Motivação

Os administradores da Fazenda Fartura planejam criar uma nova plantação de morangos, no formato retangular. Eles têm vários locais possíveis para a nova plantação, com diferentes dimensões de comprimento e largura. Para os administradores, o melhor local é aquele que tem a maior área. Eles gostariam de ter um programa de computador que, dadas as dimensões de dois locais, determina o que tem maior área. Você pode ajudá-los?

## Entrada
A entrada contém quatro linhas, cada uma contendo um número inteiro. As duas primeiras linhas indicam as dimensões (comprimento e largura) de um dos possíveis locais. As duas últimas linhas indicam as dimensões (comprimento e largura) de um outro possível local para a plantação de morangos. As dimensões são dadas em metros.
## Saída
Seu programa deve escrever uma linha contendo um único inteiro, a área, em metros quadrados, do melhor local para a plantação, entre os dois locais dados na entrada.Restrições1 ≤ comprimento ≤ 1001 ≤ largura ≤ 100

## Exemplos

>>>>>>>> 

30 8 11 56 

======== 

616 

<<<<<<<< 

---
>>>>>>>> 

12 38 5 20 

======== 

456 

<<<<<<<<

```c
#include <stdio.h>
int main(){
    int c1, l1, c2, l2, a1, a2 = 0;
    scanf("%d\n%d\n%d\n%d\n", &c1, &l1, &c2, &l2 );
//restrições?
    a1 = c1 * l1;
    a2 = c2 * l2;
    if(a1 > a2){
        printf("%d\n", a1);
    }
    if(a2 >= a1){
        printf("%d\n", a2);
    }
    return 0;
}
```
