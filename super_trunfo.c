#define _CRT_SECURE_NO_WARNINGS // Para evitar avisos de segurança do Visual Studio

#include <stdio.h> // Para entrada e saída padrão
#include <locale.h> // Para definir a localidade
#include <windows.h> // Para definir a codificação UTF-8 no Windows
#include <stdlib.h> // Para funções de sistema como system()
#include <string.h> // Para manipulação de strings

int main()
{
    SetConsoleOutputCP(CP_UTF8); // saída UTF-8
    SetConsoleCP(CP_UTF8);       // entrada UTF-8
    setlocale(LC_ALL, "");       // usa localidade do sistema

    // Variáveis para armazenar os dados da Carta 1
    char estado;
    char cod_carta[5];
    char nome_cidade[50];
    unsigned long int populacao;
    float area;
    float PIB;
    int num_pts_turisticos;
    float densidade_demografica;
    float pib_per_capita;

    // Variáveis para armazenar os dados da Carta 2
    char estado2;
    char cod_carta2[5];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int num_pts_turisticos2;
    float densidade_demografica2;
    float pib_per_capita2;

    // Variável para a escolha no menu inicial
    int escolha;

    while (1)
    { // Estrutura de repetição para retornar ao menu inicial.

        // Menu Inicial
        system("cls"); // Serve para limpar a tela
        printf("MENU:\n\n");
        printf("1. Comecar o jogo\n");
        printf("2. Instrucoes do jogo\n");
        printf("3. Sair do jogo\n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) // Menu de opções
        {
        case 1:
            printf("1. Comecar o jogo\n\n");
            break;
        case 2:
            system("cls"); // Limpa a tela antes de mostrar as instruções
            printf("Instrucoes do jogo:\n\n");
            printf("O jogo Super Trunfo consiste em comparar cartas de diferentes cidades.\n\n");
            printf("Cada carta possui atributos como populacao, area, PIB, numero de pontos turisticos, densidade demografica e PIB per capita.\n\n");
            printf("O jogador escolhe um atributo e o jogador com o maior valor vence a rodada.\n\n");
            printf("O jogo continua ate que um dos jogadores venca todas as cartas ou ate que o jogador decida parar.\n\n");
            printf("Divirta-se jogando Super Trunfo!\n\n");
            printf("=)\n\n");
            printf("Pressione a tecla Enter para voltar ao menu principal...\n\n");
            getchar(); // Espera o usuário pressionar uma tecla
            getchar(); // Limpa o buffer de entrada
            continue;
        case 3:
            system("cls"); // Limpa a tela antes de sair
            printf("Saindo do jogo...\n\n");
            printf("Obrigado por jogar Super Trunfo!\n\n");
            printf("Pressione a tecla Enter para voltar ao menu principal...\n\n");
            getchar();     // Espera o usuário pressionar uma tecla
            getchar();     // Limpa o buffer de entrada
            system("cls"); // Limpa a tela antes de sair
            break;         // Sai do loop e encerra o programa
        default:
            printf("Opcao invalida! Tente novamente.\n\n");
            continue;
        }

        if (escolha == 1)
        {
            // (Cadastro das Cartas permanece igual...)

            // Exibição dos dados da Carta 1//
            system("cls"); // Serve para limpar a tela
            printf("Carta 1:\n\n");
            printf("Digite a letra para seu Estado (de A a H): ");
            scanf(" %c", &estado);

            system("cls");
            printf("Carta 1:\n\n");
            printf("Digite o codigo para o seu Estado de acordo com a letra escolhida (Ex: 'A01'): ");
            scanf("%s", cod_carta);

            system("cls");
            printf("Carta 1:\n\n");
            getchar(); // Limpa o \n que ficou no buffer
            printf("Digite o nome da sua cidade: ");
            fgets(nome_cidade, sizeof(nome_cidade), stdin);

            system("cls");
            printf("Carta 1:\n\n");
            printf("Digite o numero da populacao de sua cidade: ");
            scanf("%lu", &populacao);

            system("cls");
            printf("Carta 1:\n\n");
            printf("Digite a area da sua cidade: ");
            scanf("%f", &area);

            system("cls");
            printf("Carta 1:\n\n");
            printf("Digite o PIB da sua cidade: ");
            scanf("%f", &PIB);

            system("cls");
            printf("Carta 1:\n\n");
            printf("Digite o numero de pontos turisticos da sua cidade: ");
            scanf("%d", &num_pts_turisticos);

            // Calcula indicadores
            pib_per_capita = PIB / populacao;
            densidade_demografica = populacao / area;

            // Exibição dos dados da Carta 2//
            system("cls");
            printf("Carta 2:\n\n");
            printf("Digite a letra para seu Estado (de A a H): ");
            scanf(" %c", &estado2);

            system("cls");
            printf("Carta 2:\n\n");
            printf("Digite o codigo para o seu Estado de acordo com a letra escolhida (Ex: 'B01'): ");
            scanf("%s", cod_carta2);

            system("cls");
            printf("Carta 2:\n\n");
            getchar();
            printf("Digite o nome da sua cidade: ");
            fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

            system("cls");
            printf("Carta 2:\n\n");
            printf("Digite o numero da populacao de sua cidade: ");
            scanf("%lu", &populacao2);

            system("cls");
            printf("Carta 2:\n\n");
            printf("Digite a area da sua cidade: ");
            scanf("%f", &area2);

            system("cls");
            printf("Carta 2:\n\n");
            printf("Digite o PIB da sua cidade: ");
            scanf("%f", &PIB2);

            system("cls");
            printf("Carta 2:\n\n");
            printf("Digite o numero de pontos turisticos da sua cidade: ");
            scanf("%d", &num_pts_turisticos2);

            // Calcula indicadores
            pib_per_capita2 = PIB2 / populacao2;
            densidade_demografica2 = populacao2 / area2;

            // Exibição dos dados das Cartas
            system("cls");
            printf("DADOS DA CARTA 1:\n\n");
            printf("Estado: %c\n\n", estado);
            printf("Codigo do Estado: %s\n\n", cod_carta);
            printf("Nome da Cidade: %s\n", nome_cidade);
            printf("Populacao: %lu\n\n", populacao);
            printf("Area: %.2f km²\n\n", area);
            printf("PIB: R$ %.2f\n\n", PIB);
            printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos);
            printf("Densidade Demografica: %.2f habitantes/km²\n\n", densidade_demografica);
            printf("PIB per capita: R$ %.2f \n\n", pib_per_capita);
            printf("===================================================================\n\n");
            printf("DADOS DA CARTA 2:\n\n");
            printf("Estado: %c\n\n", estado2);
            printf("Codigo do Estado: %s\n\n", cod_carta2);
            printf("Nome da Cidade: %s\n", nome_cidade2);
            printf("Populacao: %lu\n\n", populacao2);
            printf("Area: %.2f km²\n\n", area2);
            printf("PIB: R$ %.2f\n\n", PIB2);
            printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos2);
            printf("Densidade Demografica: %.2f habitantes/km²\n\n", densidade_demografica2);
            printf("PIB per capita: R$ %.2f \n\n\n\n", pib_per_capita2);
          
                // Espera ENTER antes de escolher o atributo
                printf("Pressione Enter para continuar...\n");
                getchar(); // Limpa o \n deixado pelo scanf
                getchar(); // Aguarda o Enter do usuário
    
                system("cls"); // Limpa a tela antes de mostrar o menu de comparação

                
           // Comparação dos atributos
            int comparacao_atributo, comparacao_atributo2;
            float valor1a, valor1b, valor2a, valor2b;
            int winA, winB;

            printf("Escolha 2 atributos para comparacao:\n\n");
            printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n6. PIB per Capita\n\n\n");
            // Primeiro atributo
            printf("Escolha o primeiro atributo: ");
            scanf("%d", &comparacao_atributo);
            while (comparacao_atributo < 1 || comparacao_atributo > 6) {
                printf("Opcao invalida! Escolha novamente: ");
                scanf("%d", &comparacao_atributo);
            }
            // Segundo atributo
            printf("Escolha o segundo atributo: ", comparacao_atributo);
            scanf("%d", &comparacao_atributo2);
            while (comparacao_atributo2 < 1 || comparacao_atributo2 > 6 || comparacao_atributo2 == comparacao_atributo) {
                printf("Opcao invalida! Escolha diferente de %d: ", comparacao_atributo);
                scanf("%d", &comparacao_atributo2);
            }

            // Mapeia os valores
            switch (comparacao_atributo) {
                case 1: valor1a = populacao;   valor2a = populacao2;   break;
                case 2: valor1a = area;        valor2a = area2;        break;
                case 3: valor1a = PIB;         valor2a = PIB2;         break;
                case 4: valor1a = num_pts_turisticos; valor2a = num_pts_turisticos2; break;
                case 5: valor1a = densidade_demografica; valor2a = densidade_demografica2; break;
                case 6: valor1a = pib_per_capita;        valor2a = pib_per_capita2;        break;
            }
            switch (comparacao_atributo2) {
                case 1: valor1b = populacao;   valor2b = populacao2;   break;
                case 2: valor1b = area;        valor2b = area2;        break;
                case 3: valor1b = PIB;         valor2b = PIB2;         break;
                case 4: valor1b = num_pts_turisticos; valor2b = num_pts_turisticos2; break;
                case 5: valor1b = densidade_demografica; valor2b = densidade_demografica2; break;
                case 6: valor1b = pib_per_capita;        valor2b = pib_per_capita2;        break;
            }
            // Determina o vencedor de maneira individual
            winA = (comparacao_atributo == 5) ? (valor1a < valor2a) : (valor1a > valor2a);
            winB = (comparacao_atributo2 == 5) ? (valor1b < valor2b) : (valor1b > valor2b);

            // Resultado final
            float soma1 = valor1a + valor1b;
            float soma2 = valor2a + valor2b;

            system("cls");
            printf("Resultado da comparacao:\n\n");
            printf("Atributo %d -> Carta1 = %.2f vs Carta2 = %.2f : %s\n", comparacao_atributo, valor1a, valor2a,
                   winA ? "Carta 1 venceu" : "Carta 2 venceu");
            printf("Atributo %d -> Carta1 = %.2f vs Carta2 = %.2f : %s\n\n", comparacao_atributo2, valor1b, valor2b,
                   winB ? "Carta 1 venceu" : "Carta 2 venceu");
            printf("Soma: Carta1 = %.2f vs Carta2 = %.2f\n\n\n", soma1, soma2);
            printf("Resultado final: %s\n\n\n", soma1 == soma2 ? "Empate!" : (soma1 > soma2 ? "Carta 1 venceu!" : "Carta 2 venceu!"));

            // Fim do jogo
            printf("Pressione Enter para retornar ao menu principal...\n");
            getchar(); // limpa buffer
            getchar();
        }

        if (escolha == 3) break;
    }
    return 0;
}
