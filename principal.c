#include <stdio.h>

// Função 4 - Conversor de temperatura - Thiago Sousa (github.com/thiagosousa81)
void converterTemperatura(int opcao, float valor) {
    float resultado;

    switch (opcao) {
        case 1: // Celsius para Fahrenheit
            resultado = (valor * 9/5) + 32; // Fórmula de conversão de Celsius para Fahrenheit
            printf("%.2f Celsius = %.2f Fahrenheit\n", valor, resultado);
            break;

        case 2: // Fahrenheit para Kelvin
            resultado = (valor - 32) * 5/9 + 273.15; // Fórmula de conversão de Fahrenheit para Kelvin
            printf("%.2f Fahrenheit = %.2f Kelvin\n", valor, resultado);
            break;

        case 3: // Kelvin para Celsius
            resultado = valor - 273.15; // Fórmula de conversão de Kelvin para Celsius
            printf("%.2f Kelvin = %.2f Celsius\n", valor, resultado);
            break;

        default:
            printf("Opção inválida!\n");
    }
}

// interface - Thiago Sousa (github.com/thiagosousa81)
int main() {
    
    int op;
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
            // Use esse exemplo para desenvolver sua parte
            printf("Conversor de unidades de temperatura\nEscolha uma função\n1 - Celsius para Fahrenheit\n2 - Fahrenheit para Kelvin\n3 - Kelvin para Celsius\n");
            scanf("%d", &op);
            float valor;
            printf("Digite um valor:");
            scanf("%f", &valor);
            converterTemperatura(op, valor);
            
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
