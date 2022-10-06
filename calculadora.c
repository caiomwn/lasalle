#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    /*
    Por Caio Virgílio Mallmann, La Salle, 2022
    
    GitHub: caiomwn

    O código a seguir cria uma calculadora, onde o usuário escolhe uma operação e depois insere os valores. O código verifica se o usuário
    tentou dividir por zero pra evitar erros de ex5ecução.
    */

    int operacao;
    float n1, n2, resultado;
    
    printf("Por Caio Virgilio Mallmann, La Salle 2022\n");
    printf("Iniciando a calculadora. Nao tente dividir por zero! Senao...\n");

            do
        {
            printf("\nSelecione a operacao desejada:\n\n");
            printf("\n1 - Adicao\n 2 - Subtracao\n 3 - Divisao\n 4 - Multiplicacao\n 5 - Raiz quadrada\n 6 - Potenciacao\n\n");

            scanf("%d", &operacao);

            if(operacao > 6 || operacao < 1)
            {
                printf("\nValor invalido! Digite outro valor.\n\n");
            }
        } while(operacao > 6 || operacao < 1);

        if (operacao == 5)
        {
            printf("\nDigite o valor da raiz quadrada: ");
            scanf("%f", &n1);
        }
        else
        {
            do
            {
                printf("\nEscolha o primeiro valor para a operacao: ");
                scanf("%f", &n1);
                printf("\nEscolha o segundo valor para a operacao: ");
                scanf("%f", &n2);

                if (operacao == 3 && n2 == 0)
                {
                    printf("Erro! E impossivel dividir por 0, tente novamente.\n");
                }
            } while(operacao == 3 && n2 == 0);
        }

        switch(operacao)
        {
            case 1:
                resultado = n1+n2;
                break;
            case 2:
                resultado = n1-n2;
                break;
            case 3:
                resultado = n1/n2;
                break;
            case 4:
                resultado = n1*n2;
                break;
            case 5:
                resultado = sqrt(n1);
                break;
            case 6:
                resultado = pow(n1, n2);
                break;
        }

        printf("\nO resultado da operacao e: %.01f \n\n", resultado);
        printf("\nE se o verdadeiro calculo foram os amigos que fizemos no caminho?\n\n");
        }
