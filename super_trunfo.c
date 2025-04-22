// SUPER TRUNFO - Jogo de cartas

#define _CRT_SECURE_NO_WARNINGS // Para evitar avisos de segurança do Visual Studio

// Bibliotecas necessárias para a utilização dos comandos de entrada e saída ao decorrer do código.
#include <stdio.h>
#include <locale.h>
#include <windows.h>

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
            printf("2. Instrucoes do jogo\n\n");
            break;
        case 3:
            printf("3. Sair do jogo\n\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n\n");
            break;
        }

        if (escolha == 1)
        {

            // Exibição dos dados da Carta 1//

            system("cls"); // Serve para limpar a tela
            printf("Carta 1:\n\n");

            // Letra para o Estado
            printf("Digite a letra para seu Estado (de A a H): ");
            scanf(" %c", &estado);

            system("cls");
            printf("Carta 1:\n\n");

            // Código para o Estado
            printf("Digite o codigo para o seu Estado de acordo com a letra escolhida (Ex: 'A01'): ");
            scanf("%s", &cod_carta);

            system("cls");
            printf("Carta 1:\n\n");

            // Nome da Cidade
            getchar(); // Limpa o \n que ficou no buffer após o scanf anterior
            printf("Digite o nome da sua cidade: ");
            fgets(nome_cidade, sizeof(nome_cidade), stdin);

            system("cls");
            printf("Carta 1:\n\n");

            // Número da População
            printf("Digite o numero da populacao de sua cidade: ");
            scanf("%lu", &populacao);

            system("cls");
            printf("Carta 1:\n\n");

            // Área
            printf("Digite a area da sua cidade: ");
            scanf("%f", &area);

            system("cls");
            printf("Carta 1:\n\n");

            // PIB
            printf("Digite o PIB da sua cidade: ");
            scanf("%f", &PIB);

            system("cls");
            printf("Carta 1:\n\n");

            // Número de Pontos Turísticos
            printf("Digite o numero de pontos turisticos da sua cidade: ");
            scanf("%d", &num_pts_turisticos);

            // Limpa a tela antes de mostrar os dados finais
            system("cls");

            // Definindo os valores de PIB e população da Carta 1
            pib_per_capita = PIB / populacao;
            densidade_demografica = populacao / area;

            // Cálculo do super trunfo com a Carta 1
            float super_trunfo = (float)populacao + area + PIB + num_pts_turisticos + pib_per_capita + (1.0f / densidade_demografica);

            ////////////////////////////////////////////////////////////////////////////////////////

            // Exibição dos dados da Carta 2//

            system("cls"); // Serve para limpar a tela
            printf("Carta 2:\n\n");

            // Letra para o Estado
            // A letra do estado deve ser diferente da carta 1
            printf("Digite a letra para seu Estado (de A a H): ");
            scanf(" %c", &estado2);

            system("cls");
            printf("Carta 2:\n\n");

            // Código para o Estado
            // O código do estado deve ser diferente da carta 1
            printf("Digite o codigo para o seu Estado de acordo com a letra escolhida (Ex: 'A01'): ");
            scanf("%s", &cod_carta2);

            system("cls");
            printf("Carta 2:\n\n");

            getchar(); // Limpa o \n que ficou no buffer após o scanf anterior

            // Nome da Cidade
            // A cidade deve ser diferente da carta 1
            printf("Digite o nome da sua cidade: ");
            fgets(nome_cidade2, sizeof(nome_cidade2), stdin); // fgets lê uma linha inteira, incluindo espaços

            system("cls");
            printf("Carta 2:\n\n");

            // Número da População
            // A população deve ser diferente da carta 1
            printf("Digite o numero da populacao de sua cidade: ");
            scanf("%lu", &populacao2);

            system("cls");
            printf("Carta 2:\n\n");

            // Área
            // A área deve ser diferente da carta 1
            printf("Digite a area da sua cidade: ");
            scanf("%f", &area2);

            system("cls");
            printf("Carta 2:\n\n");

            // PIB
            // O PIB deve ser diferente da carta 1
            printf("Digite o PIB da sua cidade: ");
            scanf("%f", &PIB2);

            system("cls");
            printf("Carta 2:\n\n");

            // Número de Pontos Turísticos
            // O número de pontos turísticos deve ser diferente da carta 1
            printf("Digite o numero de pontos turisticos da sua cidade: ");
            scanf("%d", &num_pts_turisticos2);

            system("cls");

            // Definindo os valores de PIB e população da Carta 2
            pib_per_capita2 = PIB2 / populacao2;
            densidade_demografica2 = populacao2 / area2;

            // Cálculo do super trunfo com a Carta 2
            float super_trunfo2 = (float)populacao2 + area2 + PIB2 + num_pts_turisticos2 + pib_per_capita2 + (1.0f / densidade_demografica2);

            //////////////////////////////////////////////////////////////////////////////////////////////////

            // Exibição dos dados da Carta 1
            printf("DADOS DA CARTA 1:\n\n");
            printf("Estado: %c\n\n", estado);
            printf("Codigo do Estado: %s\n\n", cod_carta);
            printf("Nome da Cidade: %s\n", nome_cidade);
            printf("Populacao: %lu\n\n", populacao);
            printf("Area: %.2f km²\n\n ", area);
            printf("PIB: R$ %.2f\n\n", PIB);
            printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos);
            printf("Densidade Demografica: %.2f habitantes/km²\n\n", densidade_demografica);
            printf("PIB per capita: R$ %.2f \n\n", pib_per_capita);

            printf("===================================================================\n\n");

            // Exibição dos dados da Carta 2
            printf("DADOS DA CARTA 2:\n\n");
            printf("Estado: %c\n\n", estado2);
            printf("Codigo do Estado: %s\n\n", cod_carta2);
            printf("Nome da Cidade: %s\n", nome_cidade2);
            printf("Populacao: %lu\n\n", populacao2);
            printf("Area: %.2f km²\n\n ", area2);
            printf("PIB: R$ %.2f\n\n", PIB2);
            printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos2);
            printf("Densidade Demografica: %.2f habitantes/km²\n\n", densidade_demografica2);
            printf("PIB per capita: R$ %.2f \n\n", pib_per_capita2);

            // Comparações
            printf("===================================================================\n\n");
            printf("COMPARACAO DE CARTAS:\n\n");

            // Exibição dos valores comparados
            printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2);
            printf("Area: Carta 1 venceu (%d)\n", area > area2);
            printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
            printf("Pontos Turisticos: Carta 1 venceu (%d)\n", num_pts_turisticos > num_pts_turisticos2);
            printf("Densidade Demografica: Carta 1 venceu (%d)\n", densidade_demografica < densidade_demografica2);
            printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita > pib_per_capita2);
            printf("Super Poder: Carta 1 venceu (%d)\n\n", super_trunfo > super_trunfo2);

            // Espera ENTER antes de escolher o atributo
            printf("Pressione Enter para escolher um atributo e comparar manualmente...\n");
            getchar(); // Limpa o \n deixado pelo scanf
            getchar(); // Aguarda o Enter do usuário

            system("cls"); // Limpa a tela antes de mostrar o menu de comparação

            // Comparação do atributo escolhido pelo usuário

            // Variável para armazenar a escolha do atributo
            int comparacao_atributo;

            // Exibição do menu de comparação de atributos
            printf("Atributos para comparacao individual:\n\n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Demografica\n\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &comparacao_atributo);

            // Leitura da escolha do usuário
            switch (comparacao_atributo)
            {
            case 1:            // População
                system("cls"); // Limpa a tela antes de mostrar os dados
                printf("Carta 1 - %s(%s): %lu\n\n", nome_cidade, cod_carta, populacao);
                printf("Carta 2 - %s(%s): %lu\n\n", nome_cidade2, cod_carta2, populacao2);
                // Exibição do resultado da comparação de população
                if (populacao > populacao2) // Se a população da carta 1 for maior que a da carta 2
                {
                    printf("Resultado: Carta 1 - %s(%s) venceu!\n\n", nome_cidade, cod_carta);
                }
                if (populacao < populacao2)
                {
                    printf("Resultado: Carta 2 - %s(%s) venceu!\n\n", nome_cidade2, cod_carta2);
                }
                if (populacao == populacao2)
                {
                    printf("Resultado: Empate!\n\n");
                }

                break;
            case 2:            // Área
                system("cls"); // Limpa a tela antes de mostrar os dados
                printf("Carta 1 - %s(%s): %.2f km²\n\n", nome_cidade, cod_carta, area);
                printf("Carta 2 - %s(%s): %.2f km²\n\n", nome_cidade2, cod_carta2, area2);
                // Exibição do resultado da comparação de área
                if (area > area2) // Se a área da carta 1 for maior que a da carta 2
                {
                    printf("Resultado: Carta 1 - %s(%s) venceu!\n\n", nome_cidade, cod_carta);
                }
                if (area < area2)
                {
                    printf("Resultado: Carta 2 - %s(%s) venceu!\n\n", nome_cidade2, cod_carta2);
                }
                if (area == area2)
                {
                    printf("Resultado: Empate!\n\n");
                }
                break;
            case 3:            // PIB
                system("cls"); // Limpa a tela antes de mostrar os dados
                printf("Carta 1 - %s(%s): R$ %.2f\n\n", nome_cidade, cod_carta, PIB);
                printf("Carta 2 - %s(%s): R$ %.2f\n\n", nome_cidade2, cod_carta2, PIB2);
                // Exibição do resultado da comparação de PIB
                if (PIB > PIB2) // Se o PIB da carta 1 for maior que o da carta 2
                {
                    printf("Resultado: Carta 1 - %s(%s) venceu!\n\n", nome_cidade, cod_carta);
                }
                if (PIB < PIB2)
                {
                    printf("Resultado: Carta 2 - %s(%s) venceu!\n\n", nome_cidade2, cod_carta2);
                }
                if (PIB == PIB2)
                {
                    printf("Resultado: Empate!\n\n");
                }
                break;
            case 4:            // Pontos Turísticos
                system("cls"); // Limpa a tela antes de mostrar os dados
                printf("Carta 1 - %s(%s): %d\n\n", nome_cidade, cod_carta, num_pts_turisticos);
                printf("Carta 2 - %s(%s): %d\n\n", nome_cidade2, cod_carta2, num_pts_turisticos2);
                // Exibição do resultado da comparação de pontos turísticos
                if (num_pts_turisticos > num_pts_turisticos2) // Se o número de pontos turísticos da carta 1 for maior que o da carta 2
                {
                    printf("Resultado: Carta 1 - %s(%s) venceu!\n\n", nome_cidade, cod_carta);
                }
                if (num_pts_turisticos < num_pts_turisticos2)
                {
                    printf("Resultado: Carta 2 - %s(%s) venceu!\n\n", nome_cidade2, cod_carta2);
                }
                if (num_pts_turisticos == num_pts_turisticos2)
                {
                    printf("Resultado: Empate!\n\n");
                }
                break;
            case 5:            // Densidade Demográfica
                system("cls"); // Limpa a tela antes de mostrar os dados
                printf("Carta 1 - %s(%s): %.2f habitantes/km²\n\n", nome_cidade, cod_carta, densidade_demografica);
                printf("Carta 2 - %s(%s): %.2f habitantes/km²\n\n", nome_cidade2, cod_carta2, densidade_demografica2);
                // Exibição do resultado da comparação de densidade demográfica
                if (densidade_demografica > densidade_demografica2) // Se a densidade demográfica da carta 1 for maior que a da carta 2
                {
                    printf("Resultado: Carta 1 - %s(%s) venceu!\n\n", nome_cidade, cod_carta);
                }
                if (densidade_demografica < densidade_demografica2)
                {
                    printf("Resultado: Carta 2 - %s(%s) venceu!\n\n", nome_cidade2, cod_carta2);
                }
                if (densidade_demografica == densidade_demografica2)
                {
                    printf("Resultado: Empate!\n\n");
                }

                break;
            default:
                printf("Opcao invalida! Tente novamente.\n\n");
                break;
            }
            // Fim do jogo
            printf("Jogo finalizado.\n");
            exit(0); // Encerra o programa
        }

        if (escolha == 2)
        {
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
        }

        if (escolha == 3)
        {
            system("cls"); // Limpa a tela antes de sair
            printf("Saindo do jogo...\n\n");
            printf("Obrigado por jogar Super Trunfo!\n\n");
            printf("Pressione a tecla Enter para voltar ao menu principal...\n\n");
            getchar();     // Espera o usuário pressionar uma tecla
            getchar();     // Limpa o buffer de entrada
            system("cls"); // Limpa a tela antes de sair
            break;         // Sai do loop e encerra o programa
        }
    }
    return 0;
}
