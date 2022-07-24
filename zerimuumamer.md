## MOTIVAÇÃO
Um grupo de amigos se reúne todas as noites para brincar de esconde-esconde na rua. Mas todas vezes que eles vão escolher quem começará procurando os demais sempre há um que fica criando confusão para não ser o jogo. Sendo assim, Mario teve a brilhante ideia de tirarem Zerim ou Um. Dessa maneira será decidida de forma justa quem começará contando.

## AÇÃO

Ajude Mario e seus amigos com o Zerim ou Um. Implemente um programa que leia zero ou um de cada amigo. E diga quem ganhou ou se deu empate.

Entrada: As opções dos 3 jogadores, uma por linha.

Saida: O jogador(jog1, jog2, jog3) que ganhou ou "empate".

## Exemplos

    >>   
    1
    
    1
    
    1
    
    <<  
    empate
    
    ---
    >>  
    0
    
    0
    
    1
    
    <<
    jog3 
    
    ---
    >>   
    1
    
    0
    
    0
    
    << 
    jog1
    
    ---
    >>  
    1 
    
    0
    
    1
    
    <<  
    jog2
    
  ```c
    #include <stdio.h>
    int main(){
    int p, s, t = 0;
    
    scanf("%d\n %d\n %d\n", &p, &s, &t);
    
    if (p == 1){
        if (s == 0 && t ==1){
            printf("jog2");
        }
        
        if (s == 1 && t == 0){
            printf("jog3");
        }
        if (s == 0 && t == 0){
            printf("jog1");
        }
    }
    
    if (p == 0){
        if(s == 1 && t == 0 ){
            printf("jog2");
        }
        if(s == 0 && t == 1){
            printf("jog3");
        }
        if(s == 1 && t == 1){
            printf("jog1");
        }
    }
    
    if ((p == 1 && s == 1 && t == 1)||(p == 0 && s == 0 && t == 0)){
        printf("empate");
    }
    return 0;
}

    ```
