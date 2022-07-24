Leia o raio de um círculo e imprima sua área (com duas casas decimais).

Fórmula: area = 3.14 * raio * raio

## Exemplo:
<<
10
>>
314.00

---
```c
#include <stdio.h>
int main(){
    int r; 
    float a;
    scanf("%d", &r);
    a = 3.14 *r *r;
    printf("%.2f", a);
    return 0;
}
```
