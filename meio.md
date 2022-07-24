Entrada: os três valores, uma por linha, todos os valores serão diferentes.

Saída: o valor do meio.

```c
#include <stdio.h>
int main (){
    int p, s, t= 0;
        scanf("%d %d %d", &p, &s, &t);

    if ((p>s && s<t && t>p) || (p<s && p>t && t<s)) {
    printf("%d",p);
    }
    
    if ((p<s && s<t && t>p) || (p>s && p>t && t<s)) {
    printf("%d",s);
    }
    
    if ((p<s && s>t && t>p) || (p>s && p>t && t>s)) {
    printf("%d",t);
    }

    return 0;
}
```
