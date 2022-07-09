---
## oi

```c
#include <stdio.h>
int main(){
/* Entrada: um caracter
Saida: Se for uma letra maiúscula, imprima a letra minúscula.
       Se for uma letra minúscula, imprima a letra maiúscula.
       Se ele for qualquer outro caractere, imprima ele mesmo.*/
       
    int x = 0;
    char letra;
    x = 'a' -'A';
    scanf("%c", &letra);
    //minusculo para maiusculo 
    if(letra >= 'a' && letra <= 'z'){
        letra = letra - x;
    }
    //maiusculo para minusculo
    else if(letra >= 'A' && letra <= 'Z'){
       letra = letra + x; 
    }
    //qualquer outro
    printf("%c", letra);
    
    return 0;
}
```
---
