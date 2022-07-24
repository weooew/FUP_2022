## Descrição

Um funcionário trabalha de segunda a sexta, de 8 até 11:59 e de 14 até 17:59. Às 17:59 é pra ele ainda estar trabalhando! No sábado ele trabalha apenas de 8 até 11:59.

O chefe cansou de tentar decorar isso tudo e deu 15 contos pra você fazer um código que lê o dia da semana, a hora e o minuto e informa ao chefe se ainda é para o funcionário estar trabalhando!

## Entrada
um número inteiro representando o dia da semana:

(1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 5 =QUI, 6 = SEX, 7 = SAB)

e mais dois inteiros representando hora e minuto, um por linha.

## Saída
Dever ser SIM se ele deve estar trabalhando ou NAO se ele não deve estar trabalhando.

Exemplos
>> 2 

10 

20 

<< SIM 

---
>> 1 

05 

02 

<< NAO 

--- 
>> 3 

19 

19 

<< NAO
```c
#include <stdio.h>
int main (){
    int d, h, m = 0;
    scanf("%d \n %d \n %d",&d, &h,&m);

        if ((d==2||d==3||d==4||d==5||d==6) && (h==8||h==9||h==10||h==11||h==14||h==15||h==16||h==17)){
        printf ("SIM");
        }
        
        else if ((d==7)&&(h==8||h==9||h==10||h==11)){
        printf("SIM");
        }
        
        else {
        printf ("NAO");
        }
    return 0;
}
```
