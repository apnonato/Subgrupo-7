#include <stdio.h>

// Função 1 - Conversor de comprimento - Jadson de Jesus Santos (github.com/JadsonEng)
void converterComprimento()
{
    int mode;
    float metro, centimetro, milimetro;

	printf("Selecione a conversao desejada");
    printf("\n1 - metro para centimetro");
    printf("\n2 - metro para milimetro");
    printf("\n3 - centimetro para metro");
    printf("\n4 - centimetro para milimetro");
    printf("\n5 - milimetro para metro");
    printf("\n6 - milimetro para centimetro");
    printf("\nDigite o numero da opcao desejada:");
    scanf("%d", &mode);

    switch (mode)
    {
    case 1:
        printf("Digite o valor em metro a ser convertido para centimetro:");
        scanf("%f", &metro);
        centimetro = metro * 100;
        printf("\nO valor em centimetro eh: %.2fcm\n", centimetro);        
        break;

    case 2:
        printf("Digite o valor em metro a ser convertido para milimetro:");
        scanf("%f", &metro);
        milimetro = metro * 1000;
        printf("\nO valor em milimetro eh: %.2fmm\n", milimetro);        
        break;

    case 3:
        printf("Digite o valor em centimetro a ser convertido para metro:");
        scanf("%f", &centimetro);
        metro = centimetro / 100;
        printf("\nO valor em metro eh: %.2fm\n", metro);        
        break;

    case 4:
        printf("Digite o valor em centimetro a ser convertido para milimetro:");
        scanf("%f", &centimetro);
        milimetro = centimetro * 10;
        printf("\nO valor em milimetro eh: %.2fmm\n", milimetro);        
        break;

    case 5:
        printf("Digite o valor em milimetro a ser convertido para metro:");
        scanf("%f", &milimetro);
        metro = milimetro / 1000;
        printf("\nO valor em metro eh: %.2fm\n", metro);        
        break;

    case 6:
        printf("Digite o valor em milimetro a ser convertido para centimetro:");
        scanf("%f", &milimetro);
        centimetro = milimetro / 10;
        printf("\nO valor em centimetro eh: %.2fcm\n", centimetro);        
        break;
    
    default: // Caso inválido
        printf("\nOpcao invalida, tente novamente...\n");
        break;
    }
}

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

// Função 5 - Conversor de velocidade - Anibal Maldonado (github.com/PhD-Anibal)
// km/h, m/s, mph
void converterVelocidade(int opcao, float valor) {
    float resultadoKmh;
    float resultadoms;
    float resultadomph;

    switch (opcao) {
        case 1: // formulas para converter de Km/h para:
            resultadoKmh = valor;
            resultadoms = valor/3.6; // m/s
            resultadomph = valor * 0.621371; // mph
            printf("As velocidades são: %.2f Km/h = %.2f m/s = %.2f mph\n", resultadoKmh, resultadoms, resultadomph);
            break;

        case 2: // formulas para converter de m/s para:
            resultadoms = valor;
            resultadoKmh = valor*3.6; // Km/h
            resultadomph = valor * 2.23694; // mph
            printf("As velocidades são: %.2f Km/h = %.2f m/s = %.2f mph\n", resultadoKmh, resultadoms, resultadomph);
            break;

        case 3: // formulas para converter de mph para:
            resultadomph = valor;
            resultadoKmh = valor*1.60934; // Km/h
            resultadoms = valor / 2.23694; // m/s
            printf("As velocidades são: %.2f Km/h = %.2f m/s = %.2f mph\n", resultadoKmh, resultadoms, resultadomph);
            break;

        default:
            printf("Opção inválida!\n");
    }
    
}

// interface - Thiago Sousa (github.com/thiagosousa81)
int main() {
    while (1) {
        float valor;
        int op;
        printf("Escolha uma das opções de conversor:\n");
        printf("1 - Comprimento\n2 - Massa\n3 - Volume\n4 - Temperatura\n5 - Velocidade\n6 - Potência\n7 - Área\n8 - Tempo\n9 - Armazenamento\n10 - Sair\n");
        scanf("%d", &op);
        
        switch (op)
        {
            case 1:
                printf("Conversor de unidades de comprimento\n");
                converterComprimento();
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
                printf("Digite um valor:");
                scanf("%f", &valor);
                converterTemperatura(op, valor);
                
                break;
            case 5:
                printf("Conversor de unidades de velocidade\n");
                printf("Sua velocidade está em qual unidade? [Escolha 1, 2 ou 3]\n");
                printf("1 - Km/h\n2 - m/s\n3 - mph\n");
                scanf("%d", &op);
                printf("Digite o valor da velocidade:");
                scanf("%f", &valor);
                converterVelocidade(op, valor);            
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
                return 0;
                break;
            default:
                printf("Opção não definida!\n");
        }        
    }    
}