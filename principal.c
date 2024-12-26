#include <stdio.h>
#include <math.h> // Obrigatório para a função 7
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

// Função 3 - Conversor de volume - Lucas Ribeiro (github.com/lucasribeiro32)
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

void converterVolume(){
    int opcao;
    float valor;
    printf("Escolha uma das opções de conversão de volume:\n");
    printf("1 - Litros para mililitros e metros cúbicos\n");
    printf("2 - Mililitros para litros e metros cúbicos\n");
    printf("3 - Metros cúbicos para litros e mililitros\n");
    scanf("%d", &opcao);
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    switch (opcao)
    {
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
        printf("Opção inválida!\n");
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
            while (getchar() != '\n');
    }
}

//6 - Conversor de potência - Lucas Ribeiro (github.com/lucasribeiro32)
void converterWatts(float watts) {
    float quilowatts = watts / 1000;
    float cavalosVapor = watts / 735.5; // 1 cv = 735.5 W
    printf("O valor em quilowatts é: %.2f kW\n", quilowatts);
    printf("O valor em cavalos-vapor é: %.2f cv\n", cavalosVapor);
}

void converterQuilowatts(float quilowatts) {
    float watts = quilowatts * 1000;
    float cavalosVapor = watts / 735.5;
    printf("O valor em watts é: %.2f W\n", watts);
    printf("O valor em cavalos-vapor é: %.2f cv\n", cavalosVapor);
}

void converterCavalosVapor(float cavalosVapor) {
    float watts = cavalosVapor * 735.5;
    float quilowatts = watts / 1000;
    printf("O valor em watts é: %.2f W\n", watts);
    printf("O valor em quilowatts é: %.2f kW\n", quilowatts);
}

void converterPotencia() {
    int opcao;
    float valor;
    printf("Escolha uma das opções de conversão de potência:\n");
    printf("1 - Watts para quilowatts e cavalos-vapor\n");
    printf("2 - Quilowatts para watts e cavalos-vapor\n");
    printf("3 - Cavalos-vapor para watts e quilowatts\n");
    scanf("%d", &opcao);
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 1:
            converterWatts(valor);
            break;
        case 2:
            converterQuilowatts(valor);
            break;
        case 3:
            converterCavalosVapor(valor);
            break;
        default:
            printf("Opção inválida!\n");
    }
}

//7 - Conversor de Área - Thiago Sousa (github.com/thiagosousa81)
float converterArea(int entrada, int saida, float value) {
    float fator_entrada = 0;
    float fator_saida = 0;
    float valor_saida = 0;

    // Definindo os fatores de conversão para a unidade de entrada
    switch (entrada) {
        case 1: // km²
            fator_entrada = pow(10, 6);
            break;
        case 2: // hm²
            fator_entrada = pow(10, 4);
            break;
        case 3: // dam²
            fator_entrada = pow(10, 2);
            break;
        case 4: // m²
            fator_entrada = 1;
            break;
        case 5: // dm²
            fator_entrada = pow(10, -2);
            break;
        case 6: // cm²
            fator_entrada = pow(10, -4);
            break;
        case 7: // mm²
            fator_entrada = pow(10, -6);
            break;
        default:
            printf("Unidade de entrada inválida.\n");
            return -1; // Valor de erro para entrada inválida
    }

    // Definindo os fatores de conversão para a unidade de saída
    switch (saida) {
        case 1: // km²
            fator_saida = pow(10, 6);
            break;
        case 2: // hm²
            fator_saida = pow(10, 4);
            break;
        case 3: // dam²
            fator_saida = pow(10, 2);
            break;
        case 4: // m²
            fator_saida = 1;
            break;
        case 5: // dm²
            fator_saida = pow(10, -2);
            break;
        case 6: // cm²
            fator_saida = pow(10, -4);
            break;
        case 7: // mm²
            fator_saida = pow(10, -6);
            break;
        default:
            printf("Unidade de saída inválida.\n");
            return -1; // Valor de erro para saída inválida
    }

    // Calculando o valor convertido
    valor_saida = value * (fator_entrada / fator_saida);
    
    return valor_saida;
}

// Função 8 - Conversor de tempo - Letícia Gonçalves Souza (github.com/ltiicia)
void converterTempo()
{
    int opcao;
    float valor;

    printf("Escolha a conversão de tempo desejada:\n");
    printf("1 - Segundos para minutos e horas\n");
    printf("2 - Minutos para segundos e horas\n");
    printf("3 - Horas para segundos e minutos\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch (opcao)
    {
    case 1: // Segundos para minutos e horas
        printf("%.2f segundos equivalem a:\n", valor);
        printf("%.2f minutos\n", valor / 60);
        printf("%.2f horas\n", valor / 3600);
        break;

    case 2: // Minutos para segundos e horas
        printf("%.2f minutos equivalem a:\n", valor);
        printf("%.2f segundos\n", valor * 60);
        printf("%.2f horas\n", valor / 60);
        break;

    case 3: // Horas para segundos e minutos
        printf("%.2f horas equivalem a:\n", valor);
        printf("%.2f segundos\n", valor * 3600);
        printf("%.2f minutos\n", valor * 60);
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }
}
// Conversor de massa - José Bruno de Souza Alves (https://github.com/JoseBrunoSouza)
void converterMassa(){
    double valor,valornovo,mult;
    int op1,op2;
    char unidade[3][15]= {"Grama(s)","Quilograma(s)","Tonelada(s)"};
    printf("\n1 -> Grama\n2 -> Quilograma\n3 -> Tonelada\n");
    printf("o que quer transformar?: ");
    scanf("%d", &op1);
    printf("\nQuantidade: ");
    scanf("%lf",&valor);
    printf("\n1 -> Grama\n2 -> Quilograma\n3 -> Tonelada\n");
    printf("Em que quer transformar: ");
    scanf("%d", &op2);
    if (op1>op2){
        mult=op1-op2;
        valornovo = valor*(pow(1000,mult));
    }else if (op2>op1){
        mult=op2-op1;
        valornovo = valor/(pow(1000,mult));
    }else{
        valornovo = valor;
    }
    printf("%.2lf %s valem %.2lf %s\n",valor,unidade[op1-1],valornovo,unidade[op2-1]);
    printf("\n");
}


// Conversor de energia - Giltean Tavares (https://github.com/Giltean)

void converterEnergia() {
    int opcao;
    double joules, calorias;

    printf("Escolha a conversão desejada:\n");
    printf("1 - Joules para Calorias\n");
    printf("2 - Calorias para Joules\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o valor em Joules: ");
        scanf("%lf", &joules);
        calorias = joules / 4.184;
        printf("%.2lf Joules equivalem a %.2lf Calorias.\n", joules, calorias);
    } else if (opcao == 2) {
        printf("Digite o valor em Calorias: ");
        scanf("%lf", &calorias);
        joules = calorias * 4.184;
        printf("%.2lf Calorias equivalem a %.2lf Joules.\n", calorias, joules);
    } else {
        printf("Opção inválida.\n");
    }
}
//Conversor de Unidade de Armazenamento de Dados - Andressa Peixoto (https://github.com/apnonato)

void converterTamanhoDados(double size, char unit) {
    // Tabela de conversão
    const double KILOBYTE = 1024;
    const double MEGABYTE = 1024 * KILOBYTE;
    const double GIGABYTE = 1024 * MEGABYTE;
    const double TERABYTE = 1024 * GIGABYTE;

    // Conversão de acordo com a unidade
    switch (unit) {
        case 'b': // Bits
            printf("Bits: %.0f\n", size);
            printf("Bytes: %.2f\n", size / 8);
            printf("Kilobytes: %.2f\n", size / (8 * KILOBYTE));
            printf("Megabytes: %.2f\n", size / (8 * MEGABYTE));
            printf("Gigabytes: %.2f\n", size / (8 * GIGABYTE));
            printf("Terabytes: %.2f\n", size / (8 * TERABYTE));
            break;

        case 'B': // Bytes
            printf("Bytes: %.0f\n", size);
            printf("Bits: %.0f\n", size * 8);
            printf("Kilobytes: %.2f\n", size / KILOBYTE);
            printf("Megabytes: %.2f\n", size / MEGABYTE);
            printf("Gigabytes: %.2f\n", size / GIGABYTE);
            printf("Terabytes: %.2f\n", size / TERABYTE);
            break;

        case 'K': // Kilobytes
            printf("Kilobytes: %.2f\n", size);
            printf("Bytes: %.2f\n", size * KILOBYTE);
            printf("Bits: %.0f\n", size * KILOBYTE * 8);
            printf("Megabytes: %.2f\n", size / KILOBYTE);
            printf("Gigabytes: %.2f\n", size / MEGABYTE);
            printf("Terabytes: %.2f\n", size / GIGABYTE);
            break;

        case 'M': // Megabytes
            printf("Megabytes: %.2f\n", size);
            printf("Kilobytes: %.2f\n", size * KILOBYTE);
            printf("Bytes: %.2f\n", size * MEGABYTE);
            printf("Bits: %.0f\n", size * MEGABYTE * 8);
            printf("Gigabytes: %.2f\n", size / KILOBYTE);
            printf("Terabytes: %.2f\n", size / MEGABYTE);
            break;

        case 'G': // Gigabytes
            printf("Gigabytes: %.2f\n", size);
            printf("Megabytes: %.2f\n", size * KILOBYTE);
            printf("Kilobytes: %.2f\n", size * MEGABYTE);
            printf("Bytes: %.2f\n", size * GIGABYTE);
            printf("Bits: %.0f\n", size * GIGABYTE * 8);
            printf("Terabytes: %.2f\n", size / KILOBYTE);
            break;

        case 'T': // Terabytes
            printf("Terabytes: %.2f\n", size);
            printf("Gigabytes: %.2f\n", size * KILOBYTE);
            printf("Megabytes: %.2f\n", size * MEGABYTE);
            printf("Kilobytes: %.2f\n", size * GIGABYTE);
            printf("Bytes: %.2f\n", size * TERABYTE);
            printf("Bits: %.0f\n", size * TERABYTE * 8);
            break;

        default:
            printf("Unidade inválida! Use 'b' para bits, 'B' para bytes, 'K' para kilobytes, 'M' para megabytes, 'G' para gigabytes ou 'T' para terabytes.\n");
    }
}

// interface - Thiago Sousa (github.com/thiagosousa81)
int main() {
    while (1) {
        float valor;
        int op;
        printf("Escolha uma das opções de conversor:\n");
        printf("1 - Comprimento\n2 - Massa\n3 - Volume\n4 - Temperatura\n5 - Velocidade\n6 - Potência\n7 - Área\n8 - Tempo\n9 - Armazenamento\n10 - Energia\n0 - Sair\n");
        scanf("%d", &op);
        
        switch (op)
        {
            case 1:
                printf("Conversor de unidades de comprimento\n");
                converterComprimento();
                break;
            case 2:
                printf("\nConversor de unidades de massa\n");
                converterMassa();
                break;
            case 3:
                printf("Conversor de unidades de volume\n");
                converterVolume();
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
                converterPotencia();
                break;
            case 7:
                printf("Conversor de unidades de área\n");
                int entrada, saida;
                float value, resultado;

                // Solicita as informações ao usuário
                printf("Digite o valor a ser convertido: ");
                scanf("%f", &value);

                printf("Digite a unidade de origem\n1 - km²\n2 - hm²\n3 - dam²\n4 - m²\n5 - dm²\n6 - cm²\n7 - mm²\n");
                scanf("%d", &entrada);

                printf("Digite a unidade de destino\n1 - km²\n2 - hm²\n3 - dam²\n4 - m²\n5 - dm²\n6 - cm²\n7 - mm²\n ");
                scanf("%d", &saida);

                // Chama a função de conversão
                resultado = converterArea(entrada, saida, value);

                // Exibe o resultado da conversão
                if (resultado != -1) {
                    printf("Resultado: %.6f\n", resultado);
                }
                break;
            case 8:            
                printf("Conversor de unidades de tempo\n");
                converterTempo();
                break;
            case 9:
                printf("Conversor de unidades de armazenamento\n");
		    
                double size;
                char unit;

                printf("Digite o tamanho (quantidade) e a unidade (b, B, K, M, G, T): ");
                scanf("%lf %c", &size, &unit);

                printf("\nConversão de %.2f %c:\n", size, unit);
                converterTamanhoDados(size, unit);
    
                break;
	    case 10:
                printf("Conversor de Energia\n");
                converterEnergia();
		break;
            case 0:
                printf("Saindo...\n");
                return 0;
                break;
            default:
                printf("Opção não definida!\n");
                while (getchar() != '\n');
                continue;                
        }       
    }    
}