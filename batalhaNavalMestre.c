#include <stdio.h>

    
int main() {

    int matriz[10][10] = {0};

    int cone[5][5] = {0};
    int octaedro[5][5] = {0};
    int cruz[5][5] = {0};

    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

// CONE

 for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 1 && j == 3) {
                matriz[i][j] = 5;
            }
            if (i == 1 && j == 1) {
                matriz[i][j] = 5;
            }
            if (i == 2 && j < 5) {
                matriz[i][j] = 5;
            }
            if (j == 2 && i < 3) {
                matriz[i][j] = 5;
            }
        }
    }

// CRUZ

int linhac = 5; 
int colunac = 5;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 1 || j == 2) {
                matriz[linhac + i][colunac + j] = 5;
            }
        }
    }

// OCTAEDRO

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (i == 1 || j == 1) {
            matriz[1 + i][7 + j] = 5;
        }
    }
}
    
// NAVIOS


for (int i = 0; i < 3; i++) {
        matriz[6 + i][3] = navio1[i];
    }

for (int i = 0; i < 3; i++) {
        matriz[4][3 + i] = navio2[i];
    }

// TABULEIRO

    printf("\n BATALHA NAVAL \n"); 

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}