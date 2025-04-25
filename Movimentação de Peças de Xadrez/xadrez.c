#define _CRT_SECURE_NO_WARNINGS // Para evitar avisos de segurança do Visual Studio
#include <stdio.h> // Para entrada e saída padrão
#include <stdlib.h>

int main() {
    // Definindo as variáveis
    int torreMovimento = 5;    // Casas para o mover da Torre
    int bispoMovimento = 5;    // Casas para o mover do Bispo
    int rainhaMovimento = 8;   // Casas para o mover da Rainha
    int cavaloBaixo = 2;       // Casas para o mover do Cavalo 
    int cavaloEsquerda = 1;    // Casas para o mover do Cavalo 
    int passo;                 // Contador de cada passo

    system("cls"); // Limpa a tela antes de mostrar o movimento das peças

    // Simulação do movimento da Torre (horizontal)
    printf("Movimento da Torre:\n\n");
    for (passo = 1; passo <= torreMovimento; passo++) {
        printf("Passo %d: Direita\n", passo);
    }

    printf("\n\n==========================\n\n");

    // Simulação do movimento do Bispo (diagonal)
    printf("Movimento do Bispo:\n\n");
    passo = 1;
    while (passo <= bispoMovimento) {
        printf("Passo %d: Cima, Direita\n", passo);
        passo++;
    }

    printf("\n\n==========================\n\n");

    // Simulação do movimento da Rainha (horizontal)
    printf("Movimento da Rainha:\n\n");
    passo = 1;
    do {
        printf("Passo %d: Esquerda\n", passo);
        passo++;
    } while (passo <= rainhaMovimento);

    printf("\n\n==========================\n\n");

    // Simulação do movimento do Cavalo (movimento em L)
    printf("Movimento do Cavalo:\n\n");
    passo = 1;
    // Loop for para o movimento vertical (cima e baixo)
    for (int baixo = 1; baixo <= cavaloBaixo; baixo++) {
        printf("Passo %d: Baixo\n", passo);
        passo++;
        // Ao terminar o movimento vertical, executar a movimentação horizontal
        if (baixo == cavaloBaixo) {
            int contadorEsquerda = 1;
            // Loop do-while para 1 casa à esquerda
            do {
                printf("Passo %d: Esquerda\n", passo);
                passo++;
                contadorEsquerda++;
            } while (contadorEsquerda <= cavaloEsquerda);
        }
    }
// Fim do Código
    return 0;
}
