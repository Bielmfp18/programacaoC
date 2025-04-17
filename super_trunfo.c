//SUPER TRUNFO - Jogo de cartas

#define _CRT_SECURE_NO_WARNINGS // Para evitar avisos de segurança do Visual Studio

//Bibliotecas necessárias para a utilização dos comandos de entrada e saída ao decorrer do código.
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);  // saída UTF-8
    SetConsoleCP(CP_UTF8);        // entrada UTF-8
    setlocale(LC_ALL, "");        // usa localidade do sistema

    //Variáveis para armazenar os dados da Carta 1
    char estado;
    char cod_carta[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float PIB;
    int num_pts_turisticos;
    float densidade_populacional;
	float pib_per_capita;



    //Exibição dos dados da Carta 1//

    system("cls"); //Serve para limpar a tela
    printf("Carta 1:\n\n");

    //Letra para o Estado
    printf("Digite a letra para seu Estado (de A a H): ");
    scanf(" %c", &estado);

    system("cls");
    printf("Carta 1:\n\n");

    //Código para o Estado
    printf("Digite o codigo para o seu Estado de acordo com a letra escolhida (Ex: 'A01'): ");
    scanf("%s", &cod_carta);

    system("cls");
    printf("Carta 1:\n\n");

    //Nome da Cidade
    getchar(); // Limpa o \n que ficou no buffer após o scanf anterior
    printf("Digite o nome da sua cidade: ");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    system("cls");
    printf("Carta 1:\n\n");

    //Número da População
    printf("Digite o numero da populacao de sua cidade: ");
    scanf("%d", &populacao);

    system("cls");
    printf("Carta 1:\n\n");

    //Área
    printf("Digite a area da sua cidade: ");
    scanf("%f", &area);

    system("cls");
    printf("Carta 1:\n\n");

    //PIB
    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &PIB);

    system("cls");
    printf("Carta 1:\n\n");

    //Número de Pontos Turísticos
    printf("Digite o numero de pontos turisticos da sua cidade: ");
    scanf("%d", &num_pts_turisticos);

    // Limpa a tela antes de mostrar os dados finais
    system("cls");


    //Definindo os valores de PIB e população da Carta 1

    pib_per_capita = PIB / populacao; //Para calcular o PIB per capita

    densidade_populacional = populacao / area; //Para calcular a densidade populacional


    ////////////////////////////////////////////////////////////////////////////////////////

	//Variáveis para armazenar os dados da Carta 2
    char estado2;
    char cod_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int num_pts_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;


	//Exibição dos dados da Carta 2//

    system("cls"); //Serve para limpar a tela
    printf("Carta 2:\n\n");

    //Letra para o Estado
    printf("Digite a letra para seu Estado (de A a H): ");
    scanf(" %c", &estado2);

    system("cls");
    printf("Carta 2:\n\n");

    //Código para o Estado
    printf("Digite o codigo para o seu Estado de acordo com a letra escolhida (Ex: 'A01'): ");
    scanf("%s", &cod_carta2);

    system("cls");
    printf("Carta 2:\n\n");

    //Nome da Cidade
    getchar(); // Limpa o \n que ficou no buffer após o scanf anterior
    printf("Digite o nome da sua cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    system("cls");
    printf("Carta 2:\n\n");

    //Número da População
    printf("Digite o numero da populacao de sua cidade: ");
    scanf("%d", &populacao2);

    system("cls");
    printf("Carta 2:\n\n");

    //Área
    printf("Digite a area da sua cidade: ");
    scanf("%f", &area2);

    system("cls");
    printf("Carta 2:\n\n");

    //PIB
    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &PIB2);

    system("cls");
    printf("Carta 2:\n\n");

    //Número de Pontos Turísticos
    printf("Digite o numero de pontos turisticos da sua cidade: ");
    scanf("%d", &num_pts_turisticos2);

    // Limpa a tela antes de mostrar os dados finais
    system("cls");

    //Definindo os valores de PIB e população da Carta 2

    pib_per_capita2 = PIB2 / populacao2; //Para calcular o PIB per capita

    densidade_populacional2 = populacao2 / area2; //Para calcular a densidade populacional

    //////////////////////////////////////////////////////////////////////////////////////////////////

    //Exibição dos dados da Carta 1
    printf("Dados da Carta 1:\n\n");
    printf("Estado: %c\n\n", estado);
    printf("Codigo do Estado: %s\n\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n\n", populacao);
    printf("Area: %.2f km²\n\n ", area);
    printf("PIB: R$ %.2f\n\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos);
	printf("Densidade Populacional: %.2f habitantes/km²\n\n", densidade_populacional);
    printf("PIB per capita: R$ %.2f \n\n", pib_per_capita );

	printf("===================================================================\n\n");

    //Exibição dos dados da Carta 2
    printf("Dados da Carta 2:\n\n");
    printf("Estado: %c\n\n", estado2);
    printf("Codigo do Estado: %s\n\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n\n", populacao2);
    printf("Area: %.2f km²\n\n ", area2);
    printf("PIB: %.2f\n\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f \n\n", pib_per_capita2);


    return 0;
}

