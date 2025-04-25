#define _CRT_SECURE_NO_WARNINGS // Para evitar avisos de segurança do Visual Studio
 #include <stdio.h> // Para entrada e saída padrão
 #include <stdlib.h>

 int main() {
    //Definindo as variáveis
     int torreMovimento = 5;    // Casas para o mover da Torre
     int bispoMovimento = 5;    // Casas para o mover do Bispo 
     int rainhaMovimento = 8;   // Casas para o mover da Rainha 
     int passo;                   // Contador de cada passos
 
     system("cls"); // Limpa a tela antes de mostrar o movimento das peças

    // Simulação do movimento da Torre (horizontal)
     printf("Movimento da Torre:\n\n");
     for (passo = 1; passo <= torreMovimento; passo++) {
         printf("Passo %d: Direita\n", passo);
     }

     printf("\n\n==========================\n\n");
 
     // Simulação do movimento do Bispo (diagonal) 
     printf("\nMovimento do Bispo:\n\n");
     passo = 1;
     while (passo <= bispoMovimento) {
         printf("Passo %d: Cima, Direita\n", passo);
         passo++;
     }

     printf("\n\n==========================\n\n");
 
// Simulação do movimento da Rainha (horizontal e vertical)
     printf("\nMovimento da Rainha:\n\n");
     passo = 1;
     do {
         printf("Passo %d: Esquerda\n", passo);
         passo++;
     } while (passo <= rainhaMovimento);
 
     return 0;
 }
 