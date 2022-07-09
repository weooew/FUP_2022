#include <stdio.h>
int main(){
/*Dado um texto(max 100 char) mostre o texto com o case invertido: o que for letra 
minúscula, imprima em maiúsculo e vice versa.
Exemplo:
>>O ovomaltine e GOSTOSO
<<o OVOMALTINE E gostoso

>>Paralelepipedarte-ei se NAO me passar a CARTEIRA
<<pARALELEPIPEDARTE-EI SE nao ME PASSAR A carteira

>>1, Dois, 3 Indiozinhos
<<1, dOIS, 3 iNDIOZINHOS*/

    char grito[100];
    int n = 0;
    int dif = 'A' - 'a';
    scanf("%[^\n]s", grito);
    
    for(int a = 0; a < 50; a++){
        if(grito[a] != '\0'){
            n = n + 1;
        }
        if(grito[a] == 0){
            break;
        }
    }
    
    for(int b = 0; b < n; b++){
        if(grito[b] >= 'A' && grito[b] <= 'Z'){
            grito[b] = grito[b] - dif; 
        }
        
        else if(grito[b] >= 'a' && grito[b] <= 'z'){
            grito[b] = grito[b] + dif;
        }
        
        printf("%c", grito[b]);
    }
    
    return 0;
}
