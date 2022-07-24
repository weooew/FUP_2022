## Motivação
Chico deseja coletar todas as frutas do quintal vizinho. Porém, sem que seu vizinho o veja.
Para isso, Chico precisa saber exatamente quanto tempo ele irá gastar na coleta.
Sabendo que você é um programador, Chico pediu sua ajuda nessa missão furtiva. 

Há três tipos de frutas no quintal: bananas, goiabas e mangas.

Chico tem uma cesta que pode carregar até C frutas.
Ele gasta exatamente 1 minuto para ir ao quintal vizinho, encher a cesta e voltar.

## Ação
Dada a capacidade C da cesta, a quantidade de frutas, calcule quantos minutos Chico precisará para coleta.

Você pode considerar que há pelo menos uma fruta antes da coleta.

## Entrada e Saída:
# Entrada:

Capacidade da cesta.

Quantidade de bananas.

Quantidade de goiabas.

Quantidade de mangas.

# Saída:

Duração da coleta em minutos.

---
Exemplos
>>
3

1

1

1

<<
1

---

>> 
5

4

4

4

<< 
3

---
>>
2

4

2

3

<<
5


Aviso:
Roubar frutas do seu vizinho é errado.
```c
#include <stdio.h>

int main(){

    int cesta, bananas, goiabas, mangas, t;

    

    scanf("%d %d %d %d", &cesta, &bananas, &goiabas, &mangas);

    t = (bananas + goiabas + mangas)/cesta;

    

    if(((bananas + goiabas + mangas) % cesta) != 0){

        t = t + 1;

    }

    

    printf("%d", t);    

    

    return 0;

}
```
