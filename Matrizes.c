#include <stdio.h>

int main() {

    int matriz[3][4];

    matriz[1][2] = 10;
    matriz[1][3] = 11;
    matriz[0][1] = 12;

    printf("Valor do elemeto: %d\n", matriz[0][1]);

    return 0;
}