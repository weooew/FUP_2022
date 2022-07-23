Leia dois inteiros e diga se ambos são divisiveis por 3 ou por 5.

ENTRADA: Dois números inteiros.

SAÍDA: "sim" (sem aspas) caso ambos sejam divisiveis por 3 ou 5. E "nao" (sem aspas) caso não sejam divisíveis

EXEMPLOS
>>

5

10

<<

sim

---
>>

7

10

<<

nao

---
>>

6

9

<<

sim

```c
#include <stdio.h>

int main()
{
    int x, y = 0;
    scanf("%d", &x);
    scanf("%d",&y);
    if ((x%3==0||x%5==0) && (y%3==0||y%5==0)){
        printf("sim");
    }
    else{
        printf("nao");
    }  
    return 0;
}
```
