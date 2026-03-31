#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tentativas = 0, numeroSecreto, palpite = 0;

    //Inicializador de criação de números aleatórios
    srand(time(NULL));

    //Gerador de números de 1 a 100
    numeroSecreto = rand() % 100 + 1;

    puts("===== JOGO DE ADIVINHAÇÃO =====");
    printf("Tente adivinhar o número entre 1 e 100!\n");

    //estrutura lógica

    do
    {
        printf("\nDigite seu palpite: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite > numeroSecreto)
        {
            printf("Muito alto! Tente um numero menor.\n");
        }
        else if (palpite < numeroSecreto)
        {
            printf("Muito baixo! Tente um numero maior.\n");
        }
        else
        {
            printf("\nParabens! Voce acertou!\n");
            printf("\nNúmero de tentativas: %d\n", tentativas);
        }

    } while (palpite != numeroSecreto);
    
    return 0;

}//fim do main