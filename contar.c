#include <stdio.h>
int main(){
  /*
Faça um programa que conta quantas vezes um caractere aparece numa frase. Conte 
apenas os caracteres exatos (distinguindo letras maiúsculas e letras minúsculas). 
Cada frase tem até 100 char.
Ex:
>>
A Andreia alimentou a avestruz com alcaparras
a
<<
8

>>
A Andreia alimentou a avestruz com alcaparras
A
<<
2

>>
A Andreia atirou alcachofras no leao
e
<<
1

>>
A Andreia atirou alcachofras no leao
x
<<
0*/
    char frase[100];
    char letra;
    int n, q = 0;
    scanf("%[^\n]s", frase);
    scanf(" %c", &letra);
    
    for(int a = 0; a < 100; a++){
        if(frase[a] != '\0'){
            n = n + 1;
        }
        //n tem quantos caracteres tem
        if(frase[a] == 0){
            break;
        }
    }
    
    for(int b = 0; b < n; b++){
        if(frase[b] == letra){
            q = q + 1;
        }
    }
    printf("%d", q);
    
    return 0;
    //COLOQUE ESPAÇO NO %C
}
