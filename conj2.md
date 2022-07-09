Todo batráquio é anfíbio, mas nem todo anfíbio é batráquio. Todo sapo, rã e perereca são tanto anfíbios
como batráquios. 

Assim, o conjunto dos sapos está contido no de batráquios que está contido no de anfíbio.

Não entendeu? Quem mandou gazear a aula de biologia. :(

[DS]

######

Dados dois vetores, verifique se o primeiro está contido no segundo.
Entrada:

1a linha: Número de elementos do primeiro vetor(1 a 50) seguido dos elementos.

2a linha: Número de elementos do segundo vetor(1 a 50) seguido dos elementos.

Saída: "sim" se o primeiro está condido no segundo e não caso contrário.

Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.

Dica: se todos os elementos de v1 existirem em v2, v1 só pode estar
contido em v2.

>>
2 1 3

3 1 5 3

<<

sim

---
>>
2 1 3

3 6 5 3

<<

nao

---
>> 
3 1 3 2

6 1 5 3 6 8 2

<<

sim

``` c
#include <stdio.h>
int main(){
    int n1, n2, x = 0;
    
    //recebi os valores dos vetores 
    scanf("%d", &n1);
    int v1[n1];
    for(int i1 = 0; i1 < n1; i1++){
        scanf("%d", &v1[i1]);
    }
    scanf("%d", &n2);
    int v2[n2];
    for(int i2 = 0; i2 < n2; i2++){
            scanf("%d", &v2[i2]);
    }
    /*repetido
    for(int a = 0; a < n1; a++){
        for(int b = 0; b < n1; b++){
            if(v1[a] == v1[b]){
                x = x+1;
            }
        }
    }*/
    //está contido?
    for(int a2 = 0; a2 < n2; a2++){
        for(int a1 = 0; a1 < n1; a1++){
            if(v1[a1] == v2[a2]){
                x = x + 1;
               
            }
           
        }
    }
    if(x == n1){
        printf("sim");
    }
    else{
        printf("nao");
    }
    
    return 0;
}
```
