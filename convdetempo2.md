Um fugitivo, um helicóptero e um policial estão em posições distintas numa pista circular, exatamente como a mostrada na figura ao lado, com dezesseis posições numeradas de 0 a 15 em direção anti-horária. O helicóptero e o policial ficam sempre parados. O objetivo do fugitivo é chegar no helicóptero sem passar pelo policial antes, claro. Ele pode decidir correr na direção horária, ou na direção anti-horária. Neste problema, dadas as posições do helicóptero, do policial e do fugitivo, e a direção em que o fugitivo decide correr, seu programa deve dizer se ele vai ou não conseguir fugir! Na figura, se o fugitivo decidir correr na direção horária, ele consegue fugir; se decidir correr na direção anti-horária, ele vai ser preso antes de chegar no helicóptero!

## Entrada
Uma linha com quatro inteiros: H, P, F e D, representando, respectivamente, as posições do helicóptero, do policial e do fugitivo, e a direção em que o fugitivo corre, -1 para horário e 1 para anti-horário.

## Saída
Seu programa deve imprimir uma linha contendo o caracter “S” se o fugitivo consegue fugir, ou “N” caso contrário.RestriçõesOs inteiros H, P e F são distintos e estão entre 0 e 15, inclusive.

## Exemplos

>>>>>>>> 

4 14 7 -1 

======== 

S 

<<<<<<<< 

---
>>>>>>>> 

4 14 7 1 

======== 

N 

<<<<<<<< 

---

>>>>>>>> 

15 9 8 -1 

======== 

S 

<<<<<<<< 

---

>>>>>>>> 

0 14 15 -1 

======== 

N 

<<<<<<<<
```c
#include <stdio.h>
int main(){
    int h, p, f, d, i = 0; 
    scanf("%d %d %d %d", &h, &p, &f, &d);
    
    if(d == 1){
        while(i<1){
            if(f == 16){
                f = 0;
            }
            if(f == p){
                printf("N\n");
                i = 1;
            }
            if(f == h){
                printf("S\n");
                i = 1;
            }
            f = f + 1;
        }
    }
    if(d ==-1){
        while(i < 1){
            if(f == -1){
                f = 15;
            }
            if(f == p){
                printf("N\n");
                i = 1;
            }
            if(f == h){
                printf("S\n");
                i = 1;
            }
            f = f - 1;
        }
    }
    
    
    
    return 0;
}
```
