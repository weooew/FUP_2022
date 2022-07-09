#include <stdio.h>
int main(){
  /*Eribelton Fagundes estava passando na praça quando uma numeróloga
lhe disse: se você mudar seu nome para Erivelton Facundo, vai ficar
mais bonito, inteligente e rico.

Ele não acreditando nisso, criou sua própria ciência, a ascologia.

Na ascologia, para descobrir o poder de um nome, some o valor asc
de todos os caracteres e depois peque o resto da divisão por 50.

Quanto menor, maior é o poder ascológico de um nome.

Ex: Ana (65 + 110 + 97)
Soma => 272 % 50 => 22
Obs.: O texto de entrada termina com um '\n'.
Ex:
>>
Ana
<<
22

>>
David
<<
38

>>
Scya
<<
0

>>
CumpadreWashington
<<
25

>>
Fernando
<<
13
  */
    char nome[50];
    int valor, soma, n = 0;
    scanf("%s", nome);
    
    for(int a = 0; a < 50; a++){
        if(nome[a] != '\0'){
            n = n + 1;
        }
        if(nome[a] == 0){
            break;
        }
    }
    
    
    for(int i = 0; i < n; i++){
        int x = nome[i];
        soma = soma + x; 
    }
    valor = soma % 50;
    printf("%d", valor);
    
    
    return 0;
}
