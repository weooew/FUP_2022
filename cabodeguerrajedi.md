## Ação

Você recebe uma entrada que é uma sequência com n de números inteiros positivos entre (n é sempre par).

O valor do número representa a força do participante.

A primeira metade da sequência representa os participantes do lado Jedi.

A segunda metade da sequência representa os participantes do lado Sith.

Analise a sequência somando a força dos participantes e escreva o nome  do lado que ganhou, ou empate. ("Jedi", "Sith", "Empate")

## Entrada:

1a linha: número de elementos

2a linha: sequência de números inteiros.

## Saida:

"Jedi", "Sith", ou "Empate"

## Exemplos
>>

2

1 1

<<

Empate

---
>>

2

2 1

<<

Jedi

---
>>

2

2 4

<<

Sith

---
>>

4

2 4 5 3

<<

Sith

---
>>

6

2 4 3 3 3 3

<<

Empate

---
>>

8

2 4 3 4 3 3 3 2

<<

Jedi

```c
#include <stdio.h>
int main (){
    int n, fj, fs, sfj, sfs = 0;
    int i = 0;
    scanf("%d", &n);
    
    while(i < (n/2)){
        scanf("%d", &fj);
        sfj = sfj + fj;
        i = i + 1;
    }
    
    while (i < n){
        scanf("%d", &fs);
        sfs = sfs + fs;
        i = i + 1;
    }
    
    if(sfj > sfs){
        printf("Jedi");
    }
    if(sfs > sfj){
        printf("Sith");
    }
    if(sfj == sfs){
        printf("Empate");
    }
    return 0;
}
```
