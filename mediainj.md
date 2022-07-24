## Ação
Faça um programa que receba as notas das três provas e do trabalho e calcule a media final do aluno. Se a média for maior ou igual a 7, o programa deve avisar que o aluno foi aprovado. Caso contrário o programa deve avisar que o aluno vai para a prova final.

A ordem da entrada é importante nessa questão. As três primeira entradas são as notas da prova.

## Entrada:
três notas de prova como inteiro e uma nota de trabalho, um por linha.

## Saída:
"Aprovado com <nota>" ou "Final com <nota>", em que <nota> é o valor da média injusta.


Exemplos
>>
10
  
10
  
5
  
10
  
<<
Aprovado com 10

---
>>
10
  
10
  
5
  
9
  
<<
Aprovado com 9
  
---
>>
7
  
7
  
2
  
6
  
<<
Final com 6

---
>>
10
  
2
  
2
  
6
  
<<
Final com 6
  ```c
  #include <stdio.h>

int main (){

    int p1, p2, p3, t, m = 0;

    scanf("%d %d %d %d",&p1, &p2, &p3, &t);

    

    if (p3 <= p1 && p3 <= p2){

        m = (p1 + p2 + t)/3;

    }

    

    if (p2 <= p1 && p2 <= p3){

        m = (p1 + p3 + t)/3;

    }

    

    if (p1 <= p2 && p1 <= p3){

        m = (p2 + p3 + t)/3;

    }

    

    if (m >= 7){

        printf("Aprovado com %d",m);

    }

    

    if (m < 7){

        printf("Final com %d",m);

    }

    

    return 0;

    

    

}
  ```
