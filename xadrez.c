#include <stdio.h>

// nivel mestre 

int vertical;

void moveRainha(int casas){
    if (casas > 0) {
        printf("A rainha se moveu para a esquerda.\n");
        moveRainha(casas - 1);
    }
}

void moveTorre(int casas){
    if (casas > 0) {
        moveTorre(casas - 1);
        printf("A torre se moveu para a direita.\n");
    }
}


void moveBispo(int casas){
    if (casas > 0) {
        vertical = casas;
        if (vertical > 0) {
            printf("O bispo se moveu para direita e ");
        }
        printf("para cima.\n");
        moveBispo(casas - 1);
    }
}

void moveCavalo() {
    for (int cavaloCima = 2, cavaloDireita = 1; cavaloCima >= cavaloDireita; cavaloCima--) {
        if (cavaloCima == 2) {
            printf("O cavalo se moveu para cima.\n");
            continue;
        }
        printf("O cavalo se moveu para cima e para a direita.\n");
    }
}


int main() {

    moveRainha(8);
    printf("\n");
    moveTorre(5);
    printf("\n");
    moveBispo(5);
    printf("\n");
    moveCavalo();

    return 0;
}
