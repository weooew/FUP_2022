Leia três valores inteiros do usuário.
Imprima a quantidade de valores iguais dentre os três.
  
```c
#include <stdio.h>
int main(){
    int a,b,c = 0;
    scanf("%d %d %d",&a, &b, &c);
        if ((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b)){
            printf("2");
        }
    
        if (a!=b && b!= c && a!=c){
            printf("0");
        }
        if(a==b && b==c){
            printf("3");
        }
}
```
