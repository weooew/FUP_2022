Entrada: O número (1 à 50) de dominós.
A altura (inteira) de cada dominó.
Saída:
"ok" caso  caso vetor esteja ordenado.
"precisa de ajuste" caso vetor esteja desordenado.

Exemplos
>>
5
1 2 3 4 4
<<
ok

---
>>
6
2 4 2 6 8 10
<<
precisa de ajuste

---
>>
1
2
<<
ok

---
Dica: Para todo elemento na posição [i] ele deve ser menor que o elemento na posição [i +1]

``` c

#include <stdio.h>
int main(){
    int n, x = 0;
    //receber tamanho a vetor
    scanf("%d", &n);
    int vet[n];
    //recebe os valores do vetor e some x
        for (int a = 0; a < n; a++){
            scanf("%d", &vet[a]);
        }
        
        for(int b = 1; b < n; b++){
            if(vet[b] >= vet[b-1]){
                x = x + 1;
            }
        }
        
    //soma de x diz se é crescente ou não
    if(x == n-1){
    printf("ok");
    }
    else{
    printf("precisa de ajuste");
    }

            // n[1] < n[2] < n[3] < n[4] < n[5]
    
    
    return 0;
}

```
