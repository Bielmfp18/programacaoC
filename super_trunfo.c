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
    float densidade_populacional;
    float pib_per_capita;

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
    densidade_populacional = populacao / area;

    // Cálculo do super trunfo com a Carta 1
    float super_trunfo = (float)populacao + area + PIB + num_pts_turisticos + pib_per_capita + (1.0f / densidade_populacional);

    ////////////////////////////////////////////////////////////////////////////////////////

    // Variáveis para armazenar os dados da Carta 2
    char estado2;
    char cod_carta2[5];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int num_pts_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

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
    densidade_populacional2 = populacao2 / area2;

    // Cálculo do super trunfo com a Carta 2
    float super_trunfo2 = (float)populacao2 + area2 + PIB2 + num_pts_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

    //////////////////////////////////////////////////////////////////////////////////////////////////

    // Exibição dos dados da Carta 1
    printf("Dados da Carta 1:\n\n");
    printf("Estado: %c\n\n", estado);
    printf("Codigo do Estado: %s\n\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %lu\n\n", populacao);
    printf("Area: %.2f km²\n\n ", area);
    printf("PIB: R$ %.2f\n\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n\n", densidade_populacional);
    printf("PIB per capita: R$ %.2f \n\n", pib_per_capita);

    printf("===================================================================\n\n");

    // Exibição dos dados da Carta 2
    printf("Dados da Carta 2:\n\n");
    printf("Estado: %c\n\n", estado2);
    printf("Codigo do Estado: %s\n\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n\n", populacao2);
    printf("Area: %.2f km²\n\n ", area2);
    printf("PIB: R$ %.2f\n\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f \n\n", pib_per_capita2);

    // Comparações
    printf("===================================================================\n\n");
    printf("Comparacao de Cartas:\n\n");

    // Exibição dos valores comparados
    printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", num_pts_turisticos > num_pts_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n\n", super_trunfo > super_trunfo2);

    // Comparação de um atributo específico (População)
    printf("===================================================================\n\n");
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    printf("Carta 1 - %s(%s): %lu\n\n", nome_cidade, cod_carta, populacao);
    printf("Carta 2 - %s(%s): %lu\n\n", nome_cidade2, cod_carta2, populacao2);
    // Exibição do resultado da comparação de população
    if (populacao > populacao2) // Se a população da carta 1 for maior que a da carta 2
    {
        printf("Resultado: Carta 1 venceu!\n\n");
    }
    else if (populacao < populacao2) // Se a população da carta 2 for maior que a da carta 1
    {
        printf("Resultado: Carta 2 venceu!\n\n");
    }
    else if (populacao == populacao2) // Se a população da carta 1 for igual a da carta 2
    {
        printf("Resultado: Empate!\n\n");
    }
    return 0;
}
