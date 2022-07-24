## Motivação
A mãe de João entrou em seu quarto e ficou furiosa por causa da bagunça. Ela deu um grito bem alto e acordou o coitado do João que estava no terceiro sono. Ele sonhando que estava contando as ovelhas que conseguiam pular a cerca da fazenda de seu pai, mas no sonho, ele só conseguia contar de 60 em 60.

Após cair da cama, sua mãe lhe disse que se ele não se levantasse em um segundo e arrumasse seu quarto ficaria de castigo até o próximo ano bissexto, primo e quadrado perfeito.

## Ação
Faça um programa para calcular em qual hora, minuto e segundo João deve ter que terminar de arrumar seu quarto. 

## Entrada e Saída
Entrada:

Três inteiros, hora, minuto e segundo inicial em uma linha (representando o momento inicial da arrumação).

Saída:

Hora, minuto e segundo final e uma linha (representando o momento final da arrumação).

Exemplos:

>> 12 10 11
<< 12 10 12

---
>> 12 10 59
<< 12 11 00

---
>> 12 59 59
<< 13 00 00

---
>> 23 59 59
<< 00 00 00

---
O printf contiver %0xd, imprime o número inteiro completando com zeros a esquerda se o número tiver menos que x caracteres. Para imprimir com dois dígitos a variável valor use.

printf("%02d", valor); 

```c
#include <stdio.h>

int main (){

 int hi, mi, si = 0;

 int hf, mf, sf = 0;

    scanf("%d %d %d", &hi, &mi, &si);

    

    hf = hi;

    mf = mi;

    

    if (si != 59){

    sf = si + 1;

    }

    

    if (si == 59 && mi != 59){

        sf = 0;

        mf = mi + 1;

    }

    if (si == 59 && mi ==59){

        sf = 0;

        mf = 0;

        hf = hi + 1;

    }

    

    if (hi == 23 && mi == 59 && si == 59){

        hf = 00;

        

    }

    

    printf("%02d %02d %02d", hf, mf, sf);

 

 

 

    return 0;

    

    

}
```
