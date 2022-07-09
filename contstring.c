#include <stdio.h>
#include <string.h>
int main(){
/*Quantas vezes aparece tal sequencia de letras.
ex: "amo o amor que me amou, oh amora amortecida" amo aparece 5 vezes
Recebe duas entradas uma por linha, 1° texto completo e a 2° o trecho.
Conte e escreva quantas vezes aparece o subtexto no texto maior.

Ex:
>>
amo o amor que me amou, oh amora amortecida
amo
<<
5

>>
o rato ratificou o carate que rateamos no cerato.
rat
<<
5
*/
    char frase[100];
    char palavra[20];
    int a = 0, soma = 0, cont = 0;
    scanf("%[^\n] %[^\n]", frase, palavra);
    //quando fiz com 2 scanf não deu certo com a palavra tendo espaço
    
    //frase[0] -> if frase[0] == palavra[0] então 
    for(int i = 0; frase[i] != '\0'; i++){
        int y = i;
        if(frase[i] == palavra[0]){
            //printf("i: %d\n", i);
            //percorer palavra
            for(int x = 0; palavra[x] != '\0'; x++){
                //printf("loop x: %d\n loop y: %d\n", x, y);
                if(frase[y] == palavra[x]){
                    soma = soma + 1;
                    //printf("soma: %d\n y:%d\n x:%d\n", soma, y, x);
                }
                if(soma == strlen(palavra)){
                    cont = cont + 1;
                }
                 y = y + 1;
            }
        }
        soma = 0;
    }
    
    printf("%d", cont);
    return 0;
}
