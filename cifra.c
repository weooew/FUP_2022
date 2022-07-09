#include <stdio.h>
int main(){
  /*Dado uma letra e um valor de rotação retorne a letra resultante.

Input: Primeira linha: letra minuscula entre 'a' e 'z'
Segunda linha: um valor inteiro positivo, negativo ou zero. Positivo significa um 
rotação pra frente, negativo uma rotação pra trás e 0 significa permanecer no mesmo lugar.

Exemplos:
>>
a
0
<<
a

>>
b
3
<<
e

>>
z
2
<<
b

>>
f
-3
<<
c

>>
b
-2
<<
z
  */
    char letra;
    int n;
    scanf("%c", &letra);
    scanf("%d", &n);
    //0 mesmo lugar
    
    //positivo frente
    if(n > 0){
        //a = 3 | letra aumentar | 
        for(int i = 0; i < n; i++){
            if(letra == 'z'){
                letra = 'a';
            }
            else {
                letra++;
                
            }
        }
    }
    //negativo trás
    if(n < 0){
        for(int w = 0; w > n; w--){
            if(letra == 'a'){
                letra = 'z';
            }
            else {
                letra--;
            }
        }
    }
    printf("%c", letra); 
    
    
    return 0;

}
