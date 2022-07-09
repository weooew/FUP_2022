#include <stdio.h>
int main(){
/*Organizar a fila do R.U. Vão ser duas filas: uma fila para servidores e outra para alunos.

Entrada: 1a linha: a quantidade de pessoas na fila.
2a linha: um vetor de inteiros onde um número ímpar representa um aluno e um número
par representa um servidor.

Saída: 1a linha: os numeros impares na ordem que aparecem na entrada
2a linha: os números pares na ordem que aparecem na entrada

Ex:
>>
2
1 2
<<
1
2

>>
4
2 6 4 1
<<
1
2 6 4

>>
6
1 2 5 3 4 9
<<
1 5 3 9
2 4
*/

    int qp = 0;
    //recebe quant de pessoas
    scanf("%d", &qp);
    
    //define tamanho do vetor
    int vet[qp];
    
    //recebe valores do vetor
    for(int a = 0; a < qp; a++){
        scanf("%d", &vet[a]);
    }
    //imprime impares
    for(int b = 0; b < qp; b++){
        if(vet[b]%2 != 0){
        printf("%d ", vet[b]);
        }
    }
    printf("\n");
    //imprime pares
    for(int c = 0; c < qp; c++){
        if(vet[c]%2 == 0){
        printf("%d ", vet[c]);
        }
    }
      
    return 0;
}

