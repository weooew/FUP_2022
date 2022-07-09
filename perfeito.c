#include <stdio.h>
#include <string.h>
int main(){
/*Some o valor asc de todos os caracteres e depois efetue a operação do resto da 
divisão por 50.

Seu objetivo é mudar o nome da pessoa para tentar encontrar o valor ascológico perfeito 0.

Para isso a única modificação que você pode fazer no nome é adicionar uma letra minúscula ao 
final da palavra. Apenas um. Se não existir nenhuma letra que, quando adicionada, coloque o valor em 0, escreva "sem sorte"

Entrada: Uma palavra apenas com minúsculos e maiúsculos sem espaços (1 a 30 chars).

Saída: o caractere inserido no final do nome, ou "sem sorte"

>>
Ana
<<
sem sorte

>>
David
<<
p

>>
Ticiany
<<
sem sorte

>>
Alfredo
<<
c

>>
Maikou
<<
sem sorte

>>
Dhaquison
<<
n
*/
    char str[30];
    scanf("%s", str);
    int soma = 0;
    //int resto = 0;
    
    //soma %50 = 0 se nao +1 letra
    //valor do nome
    for(int i = 0; str[i] != '\0'; i++){
        soma = soma + str[i];
    }
    for(char letra = 'a'; letra <= 'z'; letra++){
        if((soma + letra) % 50 == 0){
            printf("%c", letra);
            return 0;
        }
    }
    printf("sem sorte");
    /*
    resto = soma % 50;
    letra = 50 - resto; || 50 = letra + resto
    
    
    
    printf("%d %c", resto, letra);
    if((letra <= 'z' && letra >= 'a')){
        printf("%c\n", letra);
    }
    else{
        printf("sem sorte\n");
    }
    */
    return 0;
}
