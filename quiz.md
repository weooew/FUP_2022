## Descrição
Um site sobre a série Harry Potter pediu para você criar um programa para medir o conhecimento de um visitante sobre a série e assim determinar o quão fã o visitante é.

O conhecimento do visitante deve ser medido através de 4 perguntas de múltiplas escolhas, sendo apenas uma escolha certa em cada questão.

A seguir as perguntas e a respostas:

1 - A que casa pertencia Harry Potter e seus amigos ?


1) Hufflepuff

3) Ravenclaw

5) Slytherin

7) Gryffindor [RESPOSTA CORRETA]


2 - Qual o nome verdadeiro do personagem o qual é conhecido por aquele que não deve ser nomeado ?


1) Tom Riddle [RESPOSTA CORRETA]

3) Draco Malfoy

4) Bellatrix Lestrange

5) Pedro Pettigrew


3 - Quais dessa opções não é uma Relíquia da Morte ?


1) A varinha de sabugueiro

3) A pedra da ressurreição

4) A pedra filosofal [RESPOSTA CORRETA]

5) A capa de invisibilidade


4 - O ministério da magia proibiu o uso de três feitiços, conhecidos como as maldições imperdoáveis, por ela possuírem caráter maligno e o objetivo cruel. Marque opção abaixo que não corresponde a umas das maldições imperdoáveis:


1) Crucio

3) Imperio

5) Avada Kedavra

6) Expecto Patronum [REPOSTA CORRETA]


A saída do programa vai variar com o número de acerto, da seguinte maneira:


Número de acertos	Saída do programa

0	Nunca assistiu

1	Ja ouviu falar

2	Interessado no assunto

3	Fa

4	Super fa

---
Entrada: 4 números(1 2 3 4) uma por linha.
Saída: O texto correspondente ao número de acertos.

## Exemplos
>>
1
3
4
4

<<
Ja ouviu falar

---
>>
4
1
3
4
<<
Super fa

```c
#include<stdio.h>
int main(){
    int a, b, c, d, r = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a == 4){
        r = r + 1;
    }
    if(b == 1){
        r = r + 1;
    }
    if(c == 3){
        r = r + 1;
    }
    if(d == 4){
        r = r + 1;
    }
    
    
    if(r == 0){
    printf("Nunca assistiu");
    }
    if(r == 1){
    printf("Ja ouviu falar");
    }
    if(r == 2){
    printf("Interessado no assunto");
    }
    if(r == 3){
    printf("Fa");
    }
    if(r == 4){
    printf("Super fa");
    }
    
    
    
    
    return 0;
}
```
