Faça um código que retire os espaços duplicados no meio da frase.


Entrada:

linha 1: um texto(até 200 chars) só com minúsculas e espaço.

Saida:

texto sem espaços duplicados no meio da frase.

Ex:

<< 
a almofada          ta     muito             fofa
>> 
a almofada ta muito fofa

---
<< 
ai bb       cx
>> 
ai bb cx

---
<< 
aiu bbk cxmp
>> 
aiu bbk cxmp

---
<< 
a     bola     ta furada
>> 
a bola ta furada

---
```c
#include <stdio.h>

int main(){

    char str[200];

    scanf("%[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++){

        if(str[i] == ' ' && str[i+1] == ' '){

            for(int x = i; str[x] != ' '; x++){

                printf("%c", str[x]);

            }

            //for(int x = 0; str[x] != '\0'; x++){

            //    str[i+x] = str[i+x+1]; 

            //}

        }

        if(str[i] == ' ' && str[i+1] != ' '){

            printf("%c", str[i]);

        }

        if(str[i] != ' '){

            printf("%c", str[i]);

        }

    }

    return 0;

}
```
