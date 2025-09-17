#include <stdio.h>
#include <stdbool.h>

int calculate_bmi(float weight, float height)
{
    float bmi = weight / (height * height);
    printf("\nSeu IMC atual é: %.2f\n", bmi);

    return 0;
}

int main()
{
    while (true)
    {
        printf("\n--- Calculadora de IMC ---\n");
        printf("\n1. Calcular IMC\n");
        printf("2. Listar Tabela\n");
        printf("3. Sair\n");

        char option;

        printf("\nEscolha uma opção: ");
        scanf(" %c", &option);

        switch (option)
        {
        case '1':
            float weight, height;

            while (true)
            {
                printf("\nDigite sua altura (Ex: 1.70): ");
                int height_field = scanf("%f", &height);

                if (height_field != 1 || height <= 0)
                {
                    printf("ERRO: Entrada inválida! Por favor, digite apenas números.\n");

                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                }
                else
                {
                    break;
                }
            }

            while (true)
            {
                printf("Digite sua peso Ex: 70.0): ");
                int weight_field = scanf("%f", &weight);

                if (weight_field != 1 || height <= 0)
                {
                    printf("ERRO: Entrada inválida! Por favor, digite apenas números.\n");

                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                }
                else
                {
                    break;
                }
            }
            calculate_bmi(weight, height);
            
            break;

        case '2':
            printf("\n--- Tabela de IMC: ---\n");
            printf("\nAbaixo do peso: 18.5\n");
            printf("Peso normal: 18.5 - 24.9\n");
            printf("Sobrepeso: 25.0 - 29.9\n");
            printf("Obesidade grau I: 30.0 - 34.9\n");
            printf("Obesidade grau II: 35.0 - 39.9\n");
            printf("Obesidade grau III ou mórbida: 30.0 - 34.9\n");

            break;

        case '3':
            printf("\nSaindo da aplicação...\n");
            return 0;

        default:
            printf("\nOpção inválida. Por favor, tente novamente.");
            break;
        }
    }

    return 0;
}
