Uma disciplina tem uma prova de peso 5, uma prova de peso 3, e um trabalho de peso 2. Leia as 3 notas (nesta ordem) e imprima a média final.

Exemplo:
<<
8.5

6

7

>>
7.45

Pois (5*8.5 + 3*6 + 2*7) / 10 = 7.45.

Imprima o valor resultante com duas casas. decimais.

```c
#include <stdio.h>

int main (){

    float p5, p3, t2;

    scanf("%f %f %f", &p5, &p3, &t2);

    printf("%.2f", ((5*p5)+(3*p3)+(2*t2))/10);

    

    return 0;

}


```
