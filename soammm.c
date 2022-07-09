#include <stdio.h>
int main(){
  /*Entrada: Vetor possuindo 5 elementos.
Saída: A soma do maior elemento com o menor.

Ex:
>>
1 2 3 4 5
<<
6
>>
3 3 1 4 6
<<
7
>>
3 2 1 4 4
<<
5*/
    int maior, menor = 0;
    int v[5];
    
    for (int i = 0; i < 5; i++){
        scanf("%d", &v[i]);

    }
    maior = v[0];
    menor = v[0];
    
    for(int f = 0; f < 5; f++){
    //soma maior com menor      
        if(v[f] > maior) {
        maior = v[f];
        } 
        if(v[f] < menor){
        menor = v[f];
        }
    }
    
    printf("%d", maior + menor);
    
    return 0;
}
