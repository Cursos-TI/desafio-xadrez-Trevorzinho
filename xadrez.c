#include <stdio.h>

// nivel aventureiro 

int main() {

    int i = 1, passos = 1;

    // iniciando o valor de i como 1 para que ele possa mostrar quantas casas percorreu
    for (int i = 1; i <= 5; i++) {
        printf("A torre se moveu %d casa(s) para a direita.\n", i);
    }

    // resetando o valor de i para mostrar a posição novamente
    i = 1;

    do{
        printf("A rainha se moveu %d casa(s) para a esquerda.\n", i);
        i++;
    } while (i <= 8);
    
    i = 1;

    while (i <= 5){
        printf("O bispo se moveu %d casa(s) para cima e para a direita.\n", i);
        i++;
    };

    while (passos--)
    {
        for (int i = 1; i < 3; i++) {
            printf("O cavalo moveu %d casa(s) para baixo.\n", i);
        }
        printf("O cavalo moveu pra esquerda.\n", passos);
    }

// Bispo: 5 casas na diagonal superior direita
// Torre: 5 casas para a direita
// Rainha: 8 casas para a esquerda
//

    return 0;

}
