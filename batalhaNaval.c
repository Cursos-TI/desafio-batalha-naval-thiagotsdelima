#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
    };
    int escolha;

    printf("***Escolha o posicionamento do navio***\n");
    printf("1. Navio vertical\n");
    printf("2. Navio horizontal\n");
    printf("3. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch(escolha) { 
        case 1:
            printf("You chose the option Boat vertically! %d\n", tabuleiro[3][2]);
            break;
        case 2:
           printf("You chose the option Boat vertically! %d\n", tabuleiro[2][4]);
            break;
        case 3:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção inválida!\n");
            return 1;
    }
    return 0;
}