#include <stdio.h>

int main (){

    // Declaração das variáveis:
    int torre, bispo = 0, rainha = 0;

    // Estrutura for para a torre:
    printf ("Movimentação da Torre: \n");
    for (torre = 0; torre < 5; torre++){
        printf ("Direita \n");
    }

    // Estrutura while para o bispo:
    printf ("\nMovimentação do Bispo: \n");
    while (bispo < 5){
        printf ("Direita ");
        printf ("Cima \n");
        bispo++;  
    }

    // Estrutura do-while para a rainha:
    printf ("\nMovimentação da Rainha: \n");
    do {
        printf ("Esquerda \n");
        rainha ++;
    } while (rainha < 8);

   

  return 0;
}