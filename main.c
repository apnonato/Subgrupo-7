#include <stdio.h>
#include <stdlib.h>


void converterLitros(float litros){
    float mililitros = litros * 1000;
    float metroscubicos = litros / 1000;
    printf("O valor em mililitros é: %.2f\n", mililitros);
    printf("O valor em metros cúbicos é: %.2f\n", metroscubicos);
}

void converterMiliLitros(float mililitros){
    float litros = mililitros / 1000;
    float metroscubicos = litros / 1000;
    printf("O valor em litros é: %.2f\n", litros);
    printf("O valor em metros cúbicos é: %.4f\n", metroscubicos);
    
}

void converterMetrosCubicos( float metroscubicos){
    float litros = metroscubicos * 1000;
    float mililitros = litros * 1000;
    printf("O valor em litros é: %.2f\n", litros);
    printf("O valor em mililitros é: %.2f\n", mililitros);

}


int main(){
    int op;
    float valor;
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    printf("Digite a unidade de medida: \n");
    printf("1 - Litros\n");
    printf("2 - Mililitros\n");
    printf("3 - Metros Cúbicos\n");
    scanf("%d", &op);
    switch(op){
        case 1:
            converterLitros(valor);
            break;
        case 2:
            converterMiliLitros(valor);
            break;
        case 3:
            converterMetrosCubicos(valor);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}