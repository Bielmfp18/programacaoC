#define _CRT_SECURE_NO_WARNINGS

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


    //Exibição dos dados da Carta 2//
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

    //Ýrea
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

    ////////////////////////////////////////////////////////////////////////////////////////

	//Variáveis para armazenar os dados da Carta 2
    char estado2;
    char cod_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int num_pts_turisticos2;


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
    printf("Digite o número da populacao de sua cidade: ");
    scanf("%d", &populacao2);

    system("cls");
    printf("Carta 2:\n\n");

    //Ýrea
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

    //////////////////////////////////////////////////////////////////////////////////////////////////


    // Limpa a tela antes de mostrar os dados finais
    system("cls");


    //Exibição dos dados da Carta 1
    printf("Dados da Carta 1:\n\n");
    printf("Estado: %c\n\n", estado);
    printf("Codigo do Estado: %s\n\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n\n", populacao);
    printf("Area: %.2f km²\n\n ", area);
    printf("PIB: R$ %.2f\n\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos);

	printf("===================================================================\n\n");

    //Exibição dos dados da Carta 1
    printf("Dados da Carta 2:\n\n");
    printf("Estado: %c\n\n", estado2);
    printf("Codigo do Estado: %s\n\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n\n", populacao2);
    printf("Area: %.2f km²\n\n ", area2);
    printf("PIB: R$ %.2f\n\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n\n", num_pts_turisticos2);


    return 0;
}
