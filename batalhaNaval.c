#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int matriz [10][10] = {0};
    int diagonal1 [3] = {3, 3, 3};
    int diagonal2 [3] = {3, 3, 3};

    int linhah = 3, colunah = 6;
    int linhav = 6, colunav = 7;


// POSIÇÃO DOS NAVIOS

// HORIZONTAL 
    matriz [2][4] = 3;
    matriz [2][5] = 3;
    matriz [2][6] = 3;
    
// VERTICAL    
    matriz [4][2] = 3;
    matriz [5][2] = 3;
    matriz [6][2] = 3;

// NAVIOS NA DIAGONAL
    for (int i = 0; i < 3; i++) {
        matriz[linhah + i][colunah - i] = diagonal1[i];
    }
    
    for (int i = 0; i < 3; i++) {
        matriz[linhav - i][colunav + i] = diagonal2[i];
    }

// TABULEIRO 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
        printf("%d ", matriz[i][j]); 
        }
    printf("\n"); 
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
