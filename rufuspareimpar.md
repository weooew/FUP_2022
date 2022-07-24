## Descrição

Rufus (minha tartaruga cibernética) quer entrar no campeonato de par ou impar entre tartarugas.

Implemente o par ou impar no processador de RUFUS para que ele possa participar do campeonato mundial de par ou impar e trazer o prêmio pra UFC.

## Entrada:

* linha 1: A opção do jogador1 (0 para par e 1 para impar)

* linha 2: o número de dedos do primeiro jogador

* linha 3: número de dedos do segundo jogador.

## Saída:

* "Venceu" se o jogador 1 venceu e "Perdeu" se ele perdeu.

## Exemplos

>>

0

1

1

<<

Venceu

---

>>

0

0

1

<<

Perdeu

---

>>

1

0

0

<<

Perdeu

---

>>

1

1

0

<<

Venceu

```c
#include <stdio.h>

int main(){

    int op, nd1, nd2, nu = 0; 

    scanf("%d\n%d\n%d\n", &op, &nd1, &nd2);

    nu = nd1 + nd2;

    //esc impar

    if(op == 1){

        if(nu % 2 ==0){

            printf("Perdeu");

        }

        if(nu % 2 != 0){

            printf("Venceu");

        }

        if(nu == 0){

            printf("Perdeu");

        }

    }

    //esc par

    if(op == 0){

        if(nu % 2 ==0){

            printf("Venceu");

        }

        if(nu % 2 != 0){

            printf("Perdeu");

        }

        if(nu == 0){

            printf("Venceu");

        }

        

    }

    

    

    return 0;

}
```
