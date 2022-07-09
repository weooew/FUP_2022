Faça uma programa que receba os dados para serem armazenados em um vetor e Imprima os dados em ordem invertida.

---
<<
4

1 2 3 4

saída: 4 3 2 1

---
<<
2

1 2

saída: 2 1

---

<<
6

1 2 3 4 5 6

saída: 6 5 4 3 2 1

---
<<
5

1 2 3 4 5

saída: 5 4 3 2 1


```c
#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    int vet[n];
    
    //receber valores de vet
    for(int a = 0; a < n; a++){
        scanf("%d", &vet[a]);
    }
    
    //print invertido
    for(int b = n - 1; b >= 0; b--){
        printf("%d ", vet[b]);
    }
    //lembre de n-1
    
    
    return 0;
}
```
