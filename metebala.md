## Motivação
Um atirador de elite estava atirando a 400 metros de distância em em um papel milimetrado.

Para calcular a imprecisão da arma, ele dava dois tiros e media a distância entre eles.

Como ele não tinha régua, ele pegou os pontos no plano cartesiano e a fórmula da distância entre os pontos para poder calcular a distância.

## Ação
Dada a fórmula da distância entre dois pontos e os valores x e y de cada ponto,

imprima a distância entre os pontos com duas casas decimais.

## Entrada:

Coordenada X e coordenada Y do primeiro ponto.Coordenada X e coordenada Y do segundo ponto.

## Saída:

A distância entre os pontos com duas casas decimais.

## Exemplos
>> 3 7 1 4

<< 3.61

---
>> 1 8 -4 12

<< 6.40

---
>> 3 1 3 5

<< 4.00

---
## Ajuda

Fórmula da distância entre dois pontos:

Lembre-se que distância é uma grandeza sempre positiva.

Como imprimir duas casas decimais em C:

printf("%.2f", valor);

Para calcular a raiz quadrada você deverá incluir a biblioteca math.h em seu projeto e chamar a função sqrt() passando o valor que você deseja encontrar a raiz.

Para elevar ao quadrado você pode usar a função pow(x,2) que retorna x². A função pow() também pertence à math.h .

```c
#include <stdio.h>
#include <math.h>
float d (float x, float y){
    float dist, prim, seg;
    prim = pow(x, 2);
    seg = pow(y, 2);
    dist = sqrt(prim + seg);
    
    return dist;
}


int main(){
    float p, s, x1, y1, x2, y2, distancia;
    scanf("%f %f\n%f %f", &x1, &y1, &x2, &y2);
    p = x2 - x1;
    s = y2 - y1;
    distancia = d(p, s);
    printf("%.2f", distancia);
    return 0;
}
```
