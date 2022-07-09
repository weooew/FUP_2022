Major General Brigadeiro Pretinho quer separar os pequenos soldados dos grandes soldados. Depois de discutir com o Cabo Tigre qual o conceito de pequeno e grande, eles chegaram a uma conclusão favorável:

- Primeiro, precisam calcular a média de altura dos soldados.

- Pequenos são todos os soldados menores que a média.

- Grandes são todos os soldados maiores que a média.

Entrada: valor N (1 a 50) define quantos soldados existem. 
Depois segue-se N valores 'float' correspondente às alturas dos soldados.
Imprima a média com dois dígitos na primeira linha e na segunda linha para cada
soldado, imprima respectivamente 'P' se o soldado for pequeno, 'G' se for grande
e 'M' se ele for exatamente igual à média.

Ex:

>>
1 1.30
<<
1.30
M

---
>>
2 1.70 1.60
<<
1.65
G P

---
>>
3 1.70 1.60 1.80
<<
1.70
M P G

---
>>
4 1.00 1.70 1.60 1.80
<<
1.53
P G G G

---
Para reduzir os erros de precisão, declare o vetor com o tipo 'float' e, para o cálculo da média, divida a soma pelo tamanho do vetor apenas uma vez (fora do 'for').

``` c
#include <stdio.h>
int main(){
    int n = 0; 
    double soma = 0;
    scanf("%d", &n);
    double v[n];
    for(int a = 0; a < n; a++){
        scanf("%lf", &v[a]);
        soma = soma + v[a];
    }
    printf("%.2lf\n", soma/n);
    
    for(int b = 0; b < n; b++){
        if((soma/n) > v[b]){
            printf("P ");
        }
        if((soma/n) == v[b]){
            printf("M ");
        }
        if((soma/n) < v[b]){
            printf("G ");
        }
    }
    //
    
    return 0;
}
```
