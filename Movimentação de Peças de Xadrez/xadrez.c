// xadrez_customizado.c
#define _CRT_SECURE_NO_WARNINGS  // Evita avisos do Visual Studio
#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções recursivas (nomes personalizados)
void torre_recursiva(int casas_restantes, int *etapa);
void bispo_diagonal(int diagonais_restantes, int *etapa);
void rainha_horizontal(int passos_restantes, int *etapa);

int main() {
    // Quantidades de casas para cada peça
    int qtdCasasTorre           = 5;
    int qtdDiagonaisBispo       = 5;
    int qtdPassosRainha         = 8;
    int altoCavalo              = 2;  // movimento vertical do Cavalo
    int direitaCavalo           = 1;  // movimento horizontal do Cavalo

    printf("Iniciando simulação de movimentos no tabuleiro...\n\n");

    // ---------- Torre ----------
    printf("== Movimentação da Torre ==\n");
    int passoTorre = 1;
    printf("-> Quantidade de casas a percorrer: %d\n", qtdCasasTorre);
    torre_recursiva(qtdCasasTorre, &passoTorre);

    printf("\n=============================\n\n");

    // ---------- Bispo ----------
    printf("== Movimentação do Bispo ==\n");
    int passoBispo = 1;
    bispo_diagonal(qtdDiagonaisBispo, &passoBispo);

    printf("\n=============================\n\n");

    // ---------- Rainha ----------
    printf("== Movimentação da Rainha ==\n");
    int passoRainha = 1;
    printf("(Movendo na horizontal para a esquerda)\n");
    rainha_horizontal(qtdPassosRainha, &passoRainha);

    printf("\n=============================\n\n");

    // ---------- Cavalo ----------
    printf("== Movimentação do Cavalo ==\n");
    int movimentoCavalo = 1;
    printf("(L: %d casas para cima + %d para a direita)\n", altoCavalo, direitaCavalo);
    
    for (int volta = 1; volta <= altoCavalo; volta++) {
        printf("Passo %d: Cima (falta %d)\n", movimentoCavalo++, altoCavalo - volta);
        for (int eixo = 1; eixo <= direitaCavalo; eixo++) {
            if (volta < altoCavalo) {
                continue;  // aguarda terminar o movimento vertical
            }
            printf("Passo %d: Direita (movimento L concluído)\n", movimentoCavalo++);
            break;     // finaliza o loop interno
        }
    }

    printf("\nSimulação encerrada.\n");
    return 0;
}

// ----- Implementações recursivas -----

void torre_recursiva(int casas_restantes, int *etapa) {
    if (casas_restantes <= 0) {
        printf("Torre: movimento completo em %d passos.\n", *etapa - 1);
        return;
    }
    printf("Passo %d: Direita (falta %d casas)\n", (*etapa)++, casas_restantes - 1);
    torre_recursiva(casas_restantes - 1, etapa);
}

void bispo_diagonal(int diagonais_restantes, int *etapa) {
    if (diagonais_restantes <= 0) {
        printf("Bispo: todas as diagonais percorridas.\n");
        return;
    }
    // Loop vertical/horizontal aninhado para um passo diagonal
    for (int vertical = 1; vertical <= 1; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Passo %d: Cima, Direita (restam %d)\n", (*etapa)++, diagonais_restantes - 1);
        }
    }
    bispo_diagonal(diagonais_restantes - 1, etapa);
}

void rainha_horizontal(int passos_restantes, int *etapa) {
    if (passos_restantes <= 0) {
        printf("Rainha: atingiu o limite de %d passos.\n", *etapa - 1);
        return;
    }
    printf("Passo %d: Esquerda (faltam %d)\n", (*etapa)++, passos_restantes - 1);
    rainha_horizontal(passos_restantes - 1, etapa);
}
