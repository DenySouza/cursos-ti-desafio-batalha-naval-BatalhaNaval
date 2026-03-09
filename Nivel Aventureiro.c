#include <stdio.h>

int main() {

    int tabuleiro[10][10];

    // Inicializando o tabuleiro com água (0)
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // =========================
    // NAVIO HORIZONTAL
    // =========================
    int linhaH = 2;
    int colunaH = 4;

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // =========================
    // NAVIO VERTICAL
    // =========================
    int linhaV = 5;
    int colunaV = 1;

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // =========================
    // NAVIO DIAGONAL1
    // =========================
    int linhaD1 = 0;
    int colunaD1 = 0;

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    // =========================
    // NAVIO DIAGONAL2
    // =========================
    int linhaD2 = 0;
    int colunaD2 = 9;

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
    }

    // =========================
    // MOSTRAR TABULEIRO
    // =========================
    printf("\nTABULEIRO BATALHA NAVAL\n\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}