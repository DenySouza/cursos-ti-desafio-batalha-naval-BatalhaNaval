#include<stdio.h>
int main () {
    char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G','H', 'I', 'J'};
// 1º: Criando o tabuleiro (Matriz 10x10)
int tabuleiro [10][10];

// 2º: Inicializando o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {tabuleiro[i][j] = 0;}
    }

// 3º: Criando os navios (tamanho 3)
    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3] = {3,3,3};

// Coordenadas iniciais dos navios
    int linhaH = 2;
    int colunaH = 4;

    int linhaV = 5;
    int colunaV = 7;

// 4º: Posicionando navio horizontal
    for (int i = 0; i < 3; i++)
    {tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];}

// 5º: Posicionando navio vertical
    for (int i = 0; i < 3; i++)
    {tabuleiro[linhaV + i][colunaV] = navioVertical[i];}

// 6º: Exibindo o tabuleiro

    printf("   "); // espaço utilizado para a linhar os caracteres no tabuleiro.
    for(int j = 0; j < 10; j++)
    {printf("%d ", j);}

    printf("\n");

    for (int i = 0; i < 10; i++)
    { printf("%c  ", linha[i]);

        for (int j = 0; j < 10; j++)
        {printf("%d ", tabuleiro[i][j]);}

        printf("\n");
    }

    return 0;
}