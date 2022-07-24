## MOTIVAÇÃO
Mês de março, todos os funcionários da empresa vão receber aumento. Para promover os menos favorecidos foram dados aumentos maiores para os funcionários que recebem menos.

Os que recebem até 1000.00 reais, vão ganhar 20%. Quem recebe até 1500.00 vai ganhar 15%. Quem recebe até 2000.00 vai ganhar 10%. Quem recebe mais de 2000.00 só vai ganhar 5%.

Os funcionários estão nervosos pra saber quanto vão ganhar no novo contracheque. Você resolveu fazer um programa no qual o funcionário entra com seu salário e o novo salário é informado.

## AÇÃO
Faça um programa que leia o salário de um funcionário e dê como saída o salário acrescentado do aumento. Até R$ 1000.00 aumenta 20%; Até R$ 1500.00 aumenta 15%; Até R$ 2000.00 aumenta 10%; Mais de R$ 2000.00 aumenta 5%.

## ENTRADA
Salário atual do funcionário (float com até duas casas decimais)
## SAÍDA
Novo Salário (float com duas casas decimais)
## EXEMPLOS
>> 
900.00

<< 
1080.00

---
>> 
1500.00

<< 
1725.00

---
>>
2005.20

<<
2105.46
```c
#include <stdio.h>
int main(){
    float sa;
    scanf("%f", &sa);
    
    if(0 < sa && sa<= 1000){
        sa = sa * 1.2;
    }
    else if(1000 < sa && sa <= 1500){
        sa = sa *1.15;
    }
    else if(1500  < sa && sa <= 2000){
        sa = sa *1.1;
    }
    else if(sa > 2000){
        sa = sa *1.05;
    }
    
    printf("%.2f", sa);
    return 0;
}

```
