#include <stdio.h>
#include <string.h>
int main(){
  /*Para calcular a compatibilidade entre você e o crush:
Se a primeira letra do nome for igual, ganha 20 pontos;
Se tiver a mesma quantidade de letras nos nomes, ganha 30 pontos;
Se tiver a mesma quantidade de vogais, ganha 30 pontos;
Se ambos terminarem em vogal ou consoante, ganha 20 pontos.
Se os nomes terminarem um em vogal e outro em consoante, perde 10 pontos;

Devolva a porcentagem do crushnômetro (porcentagem não pode ser negativa)

Observação:
Para fazer o cálculo, some todos os pontos e imprima da seguinte forma:
"As chances do crush te dar bola sao: 100%!"
para imprimir o '%', basta coloca-lo duas vezes, assim:
printf("%%");

Entrada: Seu primeiro nome, Primeiro nome do seu crush
Saída: Porcentagem de chances do crush te dar bola

Exemplos:
>>Yudi
Priscilla
<<As chances do crush te dar bola sao: 20%!
>>Shun
Hyoga
<<As chances do crush te dar bola sao: 0%!
>>Kratos
Athena
<<As chances do crush te dar bola sao: 50%!
>>Paula
Paulo
<<As chances do crush te dar bola sao: 100%!
>>Shun
Hyoga
<<As chances do crush te dar bola sao: 10%!
>>Sabrina
Sheehan
<<As chances do crush te dar bola sao: 70%
>>Cosette
Caboclos
<<As chances do crush te dar bola sao: 40%!
>>Ermanoteu
Helainete
<<As chances do crush te
  */
    int porc = 0, qv1 = 0, qv2 = 0;
    char nome[20];
    char crush[20];
    scanf("%s", nome);
    scanf("%s", crush);
    int tamn = strlen(nome);
    int tamc = strlen(crush);
    
    //1° letra do nome igual (+20 pontos)
    if(nome[0] == crush[0]){
         porc = porc + 20;
     }
    //qnt de letras (+30)
    if((tamn)  == tamc){
         porc = porc + 30;
     }
    
    //transf em consoante ou vogal | calcula qv
    for(int c = 0; c < tamn ; c++){
        if((nome[c] == 'A')||(nome[c] == 'a')||(nome[c] == 'E')||(nome[c] == 'e')||(nome[c] == 'I')||(nome[c] == 'i')||(nome[c] == 'O')||(nome[c] == 'o')||(nome[c] == 'U')||(nome[c] == 'u')){
            nome[c] = 'v';
            qv1 = qv1 + 1;
        }
        else{
            nome[c] = 'c';
        }
    }

    for(int c = 0; c < tamc ; c++){
        if((crush[c] == 'A')||(crush[c] == 'a')||(crush[c] == 'E')||(crush[c] == 'e')||(crush[c] == 'I')||(crush[c] == 'i')||(crush[c] == 'O')||(crush[c] == 'o')||(crush[c] == 'U')||(crush[c] == 'u')){
            crush[c] = 'v';
            qv2 = qv2 + 1;
        }
        else{
            crush[c] = 'c';
        }
    }

    //calculos
        if(qv1 == qv2){
            porc = porc + 30; 
        }
        if(nome[tamn-1] == crush[tamc-1]){
            porc = porc + 20;
            
        }
        if((nome[tamn-1] != crush[tamc-1])&& (porc >= 10)){
            porc = porc - 10;
            //3:emerson tamires 50 80| 8:Yudi Priscilla 0 20| 10:Zeus Thor 20 50 
        }
        printf("As chances do crush te dar bola sao: %d%%", porc);
        printf("!");
    
    return 0;
}
