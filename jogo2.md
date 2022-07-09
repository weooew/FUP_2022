A brincadeira do avesso funciona assim.

Tem um chefe e os operários.

Os operarios ficam em fila.

O chefe diz o nome de um operario e os dois operários

que estavam perto dele tem que trocar de posição.

Se estavam em pé, ficam agachados.

Suponha a seguinte configuração onde cada número
representa uma pessoa.

[3 4 8 9 1 5 6]

O chefe grita "4", então o "3" e o "8" se agacham.

O vetor fica assim:

[-3 4 -8 9 1 5 6]

Usando o sinal negativo para representar o agachado.

Depois o chefe grita "9". O -8 e o 1 se alteram ficando

assim:

[-3 4 8 9 -1 5 6]

O 8 volta ao normal e o 1 se agacha.


Considere que nunca existem duas pessoas com o mesmo número

no vetor. Se o chefe disser um número errado, ninguém deve

se mexer.

[DS]
Entrada:

linha 1: a quantidade de casos de teste

Cada caso de teste contem duas linhas

--linha 1: o tamanho do vetor de operarios(N < 100) e o grito do chefe( 0 < X < 100)

--linha 2: o vetor de operarios, cada elemento entre (0 < 100)

Saída:

o novo vetor

Ex:
>>
1

2 3

3 1

<<

3 -1

---
>>
1

2 3

2 1

<<

2 1

---

>>
1

2 1

4 1

<<

-4 1

---
>>
3

3 1

4 1 5

3 5

4 1 5

3 4

4 1 5

<<

-4 1 -5

4 -1 5

4 -1 5

---
>>
3

7 0

3 4 8 9 1 5 6

7 4

3 4 8 9 1 5 6

7 9

3 4 -8 9 1 5 6

<<

3 4 8 9 1 5 6

-3 4 -8 9 1 5 6

3 4 8 9 -1 5 6

---

``` c
#include <stdio.h>
int main(){
    int n, grito, casos = 0;
    scanf("%d", &casos);
    for(int i = 0; i < casos; i++){
        scanf("%d %d", &n, &grito);
        int v[n];
        
        for(int a = 0; a < n; a++){
        scanf("%d", &v[a]);
        }    
        
        for(int b = 0; b < n; b++){
                if(grito == v[b] && b >= 1){
                    v[b-1] = v[b-1]*(-1);
                }
                if(grito == v[b] && b + 1 < n){
                    v[b+1] = v[b+1]*(-1);
                }
            }
        for(int c = 0; c < n; c++){
            printf("%d ", v[c]);
        }
        printf("\n");
    }
    
    return 0;
}
```
