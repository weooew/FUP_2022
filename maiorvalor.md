Leia quatro valores inteiros do usuário e imprima o maior valor lido.

```c
#include <stdio.h>
int main(){
    int a, b, c, d, maior = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a >= b && a >= c && a >= d){
        maior = a;
    }
    if(b >= a && b >= c && b >= d){
        maior = b;
    }
    if(c >= a && c >= b && c >= d){
        maior = c;
    }
    if(d >= a && d >= b && d >= b){
        maior = d;
    }
    printf("%d", maior);
    return 0;
}
```
