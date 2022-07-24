## Entrada:
linha 1: hora minuto segundo (do horário que vai dormir).

linha 2: hora minuto segundo (do horário que vai acordar).

## Saída:
hora minuto segundo (do tempo de sono que resta).

## Exemplos
>>
01 00 00 

03 00 00 

<<
2 0 0

---
>>
02 11 00

03 10 10

<<    
0 59 10

---
>>
04 10 00

03 10 10 

<<    
23 0 10

---
>>
04 00 01

03 00 00  

<< 
22 59 59

```c
#include <stdio.h>
int main(){
    int hx, mx, sx, hy, my, sy;
    scanf("%d %d %d \n %d %d %d", &hx, &mx, &sx, &hy, &my, &sy);
    
    //acordar - dormir
    int hd = hy - hx;
    int md = my - mx;
    int sd = sy - sx;
    
    if(sd < 0){
        md = md - 1;
        sd = sd + 60;
    }
    if(md < 0){
        hd = hd - 1;
        md = md + 60;
    }
    if(hd < 0){
        hd = hd + 24;
    }
    
   
    printf("%d %d %d", hd, md, sd);
    
    return 0;
}
```
