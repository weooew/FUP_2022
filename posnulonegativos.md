Entrada: Leia um valor inteiro do usuário.


Saída: Imprima "positivo", "nulo" ou "negativo" de acordo com o valor lido.


Exemplos
>>

5 

<< 

positivo 
---
>> 

-1 

<< 

negativo 
---
>> 

0 

<< 

nulo

```c
#include <stdio.h>

int main()
{
    int x = 0;
    scanf("%d", &x);
    if(x > 0){
        printf("positivo");

    }
    if(x < 0){
        printf("negativo");

    }
    if(x == 0){
        printf("nulo");

    }    
}
```
