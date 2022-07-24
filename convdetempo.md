Leia o tempo em segundos, e imprima este tempo em horas, minutos e segundos.

Dica: use divisão inteira e o operador de resto da divisão.

1 minuto = 60 segundos. 1 hora = 60 minutos * 60 segundos = 3600 segundos. 

Exemplo: 
<< 

7384 

>> 

2 3 4 

Pois 7384 segundos = 2 horas, 3 minutos e 4 segundos. 7384 = 2 * 3600 + 3 * 60 + 4.

```c
#include <stdio.h>

int main(){

    int s, tm = 0;

    int th = 0;

    scanf("%d",&s);

    

    if(s/3600 != 0){

        th = s/3600;

        s = s - (th*3600);

    }

    

    if(s/60 != 0){

     tm = s/60;

     s = s - (tm*60);

    }
  
    printf("%d %d %d", th, tm, s);
  
    return 0;
  
}
```
