#include <stdio.h>

int main() {
    int op = 0;
    printf("Escolha uma das opções de conversor:\n");
    printf("1 - Comprimento\n2 - Massa\n3 - Volume\n4 - Temperatura\n5 - Velocidade\n6 - Potência\n7 - Área\n8 - Tempo\n9 - Armazenamento\n10 - Sair\n");
    scanf("%d", &op);
    
    switch (op)
    {
        case 1:
            printf("Conversor de unidades de comprimento\n");
            break;
        case 2:
            printf("Conversor de unidades de massa\n");
            break;
        case 3:
            printf("Conversor de unidades de volume\n");
            break;
        case 4:
            printf("Conversor de unidades de temperatura\n");
            break;
        case 5:
            printf("Conversor de unidades de velocidade\n");
            break;
        case 6:
            printf("Conversor de unidades de potência\n");
            break;
        case 7:
            printf("Conversor de unidades de área\n");
            break;
        case 8:
            printf("Conversor de unidades de tempo\n");
            break;
        case 9:
            printf("Conversor de unidades de armazenamento\n");
            break;
        case 10:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção não definida!\n");
    }
    return 0;
}
