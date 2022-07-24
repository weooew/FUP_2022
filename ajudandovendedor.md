## Ação

Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostrar:

o total a pagar com desconto de 10% (para o caso de venda à vista);o valor de cada parcela, no parcelamento em 3 x sem juros;a comissão do vendedor, no caso da venda ser à vista (5% sobre o valor com desconto )a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)

## Entrada e Saída

Entrada: O valor da venda

Saída (todos os valores com duas casas decimais):

1a linha: o valor com desconto de 10%

2a linha: o valor da parcela

3a linha: a comissao (a vista)

4a linha: a comissao (a prazo)

## Exemplo

<< 1000 

>> 900.00 

333.33 

45.00 

50.00
```c
#include <stdio.h>
int main(){
    float vtt, d, p, cd, cp;
    scanf("%f", &vtt);
    d = vtt *0.9;
    p = vtt/3;
    cd = d * 0.05;
    cp = vtt * 0.05;

    printf("%.2f\n%.2f\n%.2f\n%.2f\n", d, p, cd, cp);
    return 0;
}
```
