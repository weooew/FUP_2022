Dado um inteiro C, que indica a capacidade do ônibus prevista pela legislação e um valor M (quantidade de pessoas que entram ou saem), mostre o estado do busão.

Imprima (sem aspas):

"vazio"-> se não houver passageiros.

"ainda cabe"-> se houver passageiros, mas não está lotado ainda.

"lotado"-> se a quantidade de passageiros alcançar a capacidade.

"hora de partir"-> se a quantidade de passageiros alcançar duas vezes a capacidade.

Seu programa deve encerrar quando for a hora de partir.

Você pode assumir:

C > 0.Um número positivo representa a entrada de pessoas.Um número negativo representa a saída de pessoas.Nunca vão sair mais pessoas do que tem no ônibus

Entrada e Saída

Entrada: o inteiro C (capacidade).O inteiro M (movimentação). Continue lendo até o ônibus partir.

Saída: o estado do ônibus para cada entrada ou saída de gente.

Exemplos
>> 5 

0 

3 

2 

4 

1

<< 

vazio 

ainda cabe 

lotado 

lotado 

hora de partir

--
>> 10 

10 

-10 

30 

<< lotado 

vazio 

hora de partir

---
>> 3
 
1 

1 
 
1 
 
-3 
 
3 
 
3 

<< ainda cabe 
 
ainda cabe 
 
lotado 
 
vazio 

lotado 

hora de partir
```c
#include <stdio.h>
int main(){
    int C, M = 0;
    scanf("%d", &C);
    
        for(int p = 0; p < 2*C ; ){
            scanf("%d", &M);
            p = M + p;
            
            if(p == 0){
            printf("vazio\n");
            }
            if(p < C && p != 0){
            printf("ainda cabe\n");
            }
            if(p >= C && p < 2*C){
            printf("lotado\n");
            }
            if(2*C <= p){
            printf("hora de partir\n");
                return 0;
            }
        }
}
```
