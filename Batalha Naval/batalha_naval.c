#define _CRT_SECURE_NO_WARNINGS // Desativa aviso no Visual Studio

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

#define TAM_TAB 10  //Tamanho do tabuleiro
#define TAM_NAVIO 3 // Cada navio ocupa 3 células
#define MARCA 3     // Valor que indica navio

int main()
{
    // Ajusta console pra UTF-8 e limpa a tela
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "");
    system("cls");

    // Variável para a representação do mar (0 = água)
    int tabuleiro[TAM_TAB][TAM_TAB] = {{0}};

    // Variáveis para as coordenadas iniciais dos 4 navios
    int linhaNavioVertical = 2;
    int colunaNavioVertical = 4;

    int linhaNavioHorizontal = 5;
    int colunaNavioHorizontal = 1;

    int linhaDiagDescendente = 0;
    int colunaDiagDescendente = 0;

    int linhaDiagAscendente = 9;
    int colunaDiagAscendente = 2;

    // --- Checagem dos limites de cada navio ---
    // Vertical
    if (linhaNavioVertical < 0 ||
        linhaNavioVertical + TAM_NAVIO > TAM_TAB ||
        colunaNavioVertical < 0 ||
        colunaNavioVertical >= TAM_TAB)
    {
        printf("Erro: navio vertical fora!\n");
        return 1;
    }
    // horizontal
    if (linhaNavioHorizontal < 0 ||
        linhaNavioHorizontal >= TAM_TAB ||
        colunaNavioHorizontal < 0 ||
        colunaNavioHorizontal + TAM_NAVIO > TAM_TAB)
    {
        printf("Erro: navio horizontal fora!\n");
        return 1;
    }
    // Diagonal descendente (↘)
    if (linhaDiagDescendente < 0 ||
        colunaDiagDescendente < 0 ||
        linhaDiagDescendente + (TAM_NAVIO - 1) >= TAM_TAB ||
        colunaDiagDescendente + (TAM_NAVIO - 1) >= TAM_TAB)
    {
        printf("Erro: diagonal (↘) fora!\n");
        return 1;
    }
    // Diagonal ascendente (↗)
    if (linhaDiagAscendente >= TAM_TAB ||
        linhaDiagAscendente - (TAM_NAVIO - 1) < 0 ||
        colunaDiagAscendente < 0 ||
        colunaDiagAscendente + (TAM_NAVIO - 1) >= TAM_TAB)
    {
        printf("Erro: diagonal (↗) fora!\n");
        return 1;
    }

    // --- Checagem da sobreposição ---
    for (int i = 0; i < TAM_NAVIO; i++)
    {
        if (tabuleiro[linhaNavioVertical + i][colunaNavioVertical] != 0)
        {
            printf("Erro: sobreposição vertical!\n");
            return 1;
        }
        if (tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] != 0)
        {
            printf("Erro: sobreposição horizontal!\n");
            return 1;
        }
        if (tabuleiro[linhaDiagDescendente + i][colunaDiagDescendente + i] != 0)
        {
            printf("Erro: sobreposição diag ↘!\n");
            return 1;
        }
        if (tabuleiro[linhaDiagAscendente - i][colunaDiagAscendente + i] != 0)
        {
            printf("Erro: sobreposição diag ↗!\n");
            return 1;
        }
    }

    // --- Marca os navios no tabuleiro ---
    for (int i = 0; i < TAM_NAVIO; i++)
    {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = MARCA;         // vertical
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = MARCA;     // horizontal
        tabuleiro[linhaDiagDescendente + i][colunaDiagDescendente + i] = MARCA; // diag ↘
        tabuleiro[linhaDiagAscendente - i][colunaDiagAscendente + i] = MARCA;   // diag ↗
    }

    // Mostra o tabuleiro com os navios em meio ao mar (0 = água, 3 = navio)
    system("cls");
    printf("\nTabuleiro:\n\n");
    for (int lin = 0; lin < TAM_TAB; lin++)
    {
        for (int col = 0; col < TAM_TAB; col++)
        {
            printf("%d ", tabuleiro[lin][col]);
        }
        printf("\n");
    }

    return 0;
}
