## Entrada:

três valores inteiros, representando a altura em cm dos Rufinhos.

## Saída: 

"P M G"; "P G M", "G P M"; "M P G"; "M G P" ou "G M P", dependendo dos valores de entrada. 

## Exemplo:
>>

12

15

17

<<

P M G

---
>>

11

17

12

<<

P G M

---
>>

14

13

12

<<

G M P

```c
#include<stdio.h>

int main (){

    int p, s, t = 0;

    

    scanf("%d %d %d", &p, &s, &t);

    

    if (p > s && p > t && s > t){

        printf("G M P");

    }

    if (p> s && p> t && t > s){

        printf("G P M");

    }

    if (t> p && t> s && s> p){

        printf("P M G");

    }

    if (s> p && s> t && t> p){

        printf("P G M");

    }

    if(t> p && t> s && p> s){

        printf("M P G");

    }

    

    if(s> p && s> t && p>t){

        printf("M G P");

    }

    

    return 0;

}
```
