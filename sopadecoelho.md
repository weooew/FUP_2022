## Fibonacci e a sopa de Coelhos
Zé da Carroça comprou um casal de coelhos. Ele gosta muito de sopa de coelho. Muito mesmo. Só tem uma coisa maior em Zé da Carroça do que a vontade de tomar sopa de coelho. É o sonho de ser um cuniculturista vendendo carne de coelho para todo sertão central. Ele ainda está decidindo se come o casal de coelhos na sopa de hoje ou espera até que eles procriem o suficiente pra que possa ficar rico.
Estudando um pouco ele descobriu uma regra interessante criado por Leonardo de Pisa no ano de 1200.

1. No primeiro mês nasce somente um casal;

2. Casais amadurecem sexualmente após o segundo mês de vida;

3. Não há problemas genéticos no cruzamento consanguíneo;

4. Todos os meses, cada casal dá à luz a um novo casal;

Por incrível que pareça, essas regras geram a seguinte sucessão de números: 1, 1, 2, 3, 5, 8, 13, ...
Leonardo de Pisa também é conhecido como Fibonacci. Se quiser entender melhor como se chega na sequência veja : https://brasilescola.uol.com.br/matematica/sequencia-fibonacci.htm
Dado o número n, imprima o n-ésimo termo da série.
Sugestão: Não use recursão. Gere os números da sequência até se chegar no n-ésimo número. .

## Entrada
um valor n.
## Saída
O enésimo termo da sequência de Fibonacci.

## Exemplos
Entrada

1

Saída

1	

---

Entrada

6

Saída

8
```c
#include <stdio.h>

int main(){

    /*1 1 2 3 5 8 13 21

    a e p

      a e p

        a e p 

    */

    int aux, e  = 1, p = 1;

    

    int n = 0;

    scanf("%d", &n);

    

    //n termo  | e numero do termo

    //1 2 3 4 5

    //1 1 2 3 5

    if(n == 1){

        printf("1");

    }

    

    else{

        int i = 2; 

    while(i <= n){

        aux = e;//1 //

        e = p;//1 //

        p = p + aux;//2 //

        

        

        i = i + 1;

    }

    

    printf("%d", e);

        

    }

    return 0;

}
```
