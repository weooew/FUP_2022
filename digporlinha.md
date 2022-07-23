Leia um inteiro com 4 dígitos, e imprima um dígito por linha.

<< 

2468 

>> 
2 

4 

6 

8

Dica: Podemos obter o 1o dígito dividindo por 1000, guardando na variável apenas o que sobrou (resto da divisão). Assim sucessivamente até o último dígito. Ex.: 2468 = 2*1000 + 4*100 + 6*10 + 8.

```c
#include <stdio.h>
int main(){
    int a = 0;
    scanf("%d", &a);
    	printf("%d\n", a/1000);
    	a = a % 1000;
    	printf("%d\n", a/100);
    	a = a % 100;
    	printf("%d\n", a/10);
    	a = a % 10;
    	printf("%d\n", a/1);
    return 0;
}
```
