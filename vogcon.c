#include <stdio.h>
int main(){
/*Dada uma frase de entrada (max 50 char), imprime a codificação c para consoante e
v para vogal

Ex:
>>
Pedrinho Marcio
<<
cvccvccv cvccvv

>>
Reumario Albrito
<<
cvvcvcvv vcccvcv

>>
AaBbCcDdEe
<<
vvccccccvv
*/

    char nome[50];
    int n = 0;
    scanf("%[^\n]s", nome);
    
    for(int a = 0; a < 50; a++){
        if(nome[a] != '\0'){
            n = n + 1;
        }
        if(nome[a] == 0){
            break;
        }
    }
    
    for(int b = 0; b < n; b++){
        if((nome[b] == 'A')||(nome[b] == 'a')||(nome[b] == 'E')||(nome[b] == 'e')||(nome[b] == 'I')||(nome[b] == 'i')||(nome[b] == 'O')||(nome[b] == 'o')||(nome[b] == 'U')||(nome[b] == 'u')||(nome[b] == ' ')){
            if(nome[b] != ' '){
            nome[b] = 'v';
            }
        }
        else{
            nome[b] = 'c';
        }
        
        printf("%c", nome[b]);
    }
    
    
    return 0;
}
