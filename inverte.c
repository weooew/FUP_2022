#include <stdio.h>
int main(){
/*Dado uma string, imprima a mesma string ao contrário. Cada frase tem até 100 char.
Exemplos:
>>
ra on odnalor at acopip ed oriehc a acopip
<<
pipoca a cheiro de pipoca ta rolando no ar

>>
lua de cristal que me faz sonhar
<<
rahnos zaf em euq latsirc ed aul

>>
marquei um x no seu coracao
<<
oacaroc ues on x mu ieuqram*/
    char string[100];
    int n = 0;
    scanf("%[^\n]s", string);
    
    for(int a = 0; a < 50; a++){
        if(string[a] != '\0'){
            n = n + 1;
        }
        if(string[a] == 0){
            break;
        }
    }
    
    for(int b = n - 1; b >= 0; b--){
        printf("%c", string[b]);
    }
    
    
    return 0;
}
