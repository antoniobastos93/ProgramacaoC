#include <stdio.h>

int main(){

int i = 1, x = 1, z;

// Mover a torre 5 casas para a direita: 
    printf("Movimentação da Torre...\n");
    while (i <= 5)
    {
        printf("Direita\n");
        i++;
    }

// Mover o bispo 5 casas na diagonal:
    printf("Movimentação do Bispo...\n");
    do
    {
        printf("Cima, Direita\n");
        x++;
    } while (x <= 5);
    
// Mover a rainha 8 casas para a esquerda:    
    printf("Movimentação da Rainha...\n");
    for (z = 1; z <= 8; z++)
    {
        printf("Esquerda\n");
    }
    
    return 0;
}