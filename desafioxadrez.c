#include <stdio.h>

// Recursividades

//Torre
void moverTorre(int casas1) {
    if (casas1 > 0) {
        printf("Direita \n");
        moverTorre(casas1 - 1);
    }
}

//Rainha
void moverRainha (int casas2){
    if (casas2 > 0) {
        printf ("Esquerda \n");
        moverRainha (casas2 - 1);
    }
}

//Bispo
void moverBispo (int casas3){
        for (int a = 0; a < 5; a++){
            for (int b = 0; b < 1; b++){
                printf ("Direita ");
            }
            printf ("Cima \n");
        }
    }

int main (){

    // Declaração das variáveis:
    int bispo = 0, rainha = 0, cavalo = 0;

    // Chamando a Recursividade "Mover Torre":
    printf ("Movimentação da Torre: \n\n");
    moverTorre(5);

     // Chamando a Recursividade "Mover Rainha":
    printf ("\nMovimentação da Rainha: \n\n");
    moverRainha (8);

    // Chamando a Recursividade "Mover Bispo":
    printf ("\nMovimentação do Bispo: \n\n");
    moverBispo (5);

    // Loop aninhado para o cavalo:
    printf ("\nMovimentação do Cavalo: \n\n");
    for (int c = 0; c <= 1; c++){
        for (int d = 0; d <= 0; d++){
            if (c <= 1){
                printf ("Cima \n");
            }
            if (c == 1 & d == 0){
                printf ("Direita\n");
                break;
            }
        }
    }

  return 0;
}