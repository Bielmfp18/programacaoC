#define _CRT_SECURE_NO_WARNINGS // Para evitar avisos de segurança do Visual Studio

#include <stdio.h>    // Entrada e saída padrão
#include <locale.h>   // Definição de localidade
#include <windows.h>  // Codificação UTF-8 no Windows
#include <stdlib.h>   // Funções do sistema (system)
#include <string.h>   // Manipulação de strings

#define TAMANHO_TABULEIRO 10  // Tabuleiro 10×10
#define TAMANHO_NAVIO      3  // Cada navio ocupa 3 células
#define MARCA_NAVIO        3  // Valor para navio no tabuleiro

int main()
{
    SetConsoleOutputCP(CP_UTF8); // Saída UTF-8
    SetConsoleCP(CP_UTF8);       // Entrada UTF-8
    setlocale(LC_ALL, "");     // Localidade do sistema

    system("cls"); // Limpa a tela

    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = { 0 };

    // Posições iniciais dos navios
    int linhaNavioVertical    = 2;
    int colunaNavioVertical   = 4;
    int linhaNavioHorizontal  = 5;
    int colunaNavioHorizontal = 1;

    // Limites para o navio vertical
    if (linhaNavioVertical < 0 ||
        linhaNavioVertical + TAMANHO_NAVIO > TAMANHO_TABULEIRO ||
        colunaNavioVertical < 0 ||
        colunaNavioVertical >= TAMANHO_TABULEIRO)
    {
        printf("Erro: navio vertical fora dos limites!\n");
        return 1;
    }

    // Limites para o navio horizontal
    if (linhaNavioHorizontal < 0 ||
        linhaNavioHorizontal >= TAMANHO_TABULEIRO ||
        colunaNavioHorizontal < 0 ||
        colunaNavioHorizontal + TAMANHO_NAVIO > TAMANHO_TABULEIRO)
    {
        printf("Erro: navio horizontal fora dos limites!\n");
        return 1;
    }

    // Verifica a sobreposição
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linhaNavioVertical + i][colunaNavioVertical] != 0) {
            printf("Erro: sobreposição vertical!\n");
            return 1;
        }
        if (tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] != 0) {
            printf("Erro: sobreposição horizontal!\n");
            return 1;
        }
    }

    // Marca o navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = MARCA_NAVIO;
    }

    // Marca o navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = MARCA_NAVIO;
    }

    // Exibe o tabuleiro

    system("cls"); // Limpa a tela antes de mostrar o tabuleiro
    
    printf("\nTabuleiro (0 = água, 3 = navio):\n\n");
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
