#include <stdio.h>

int main()
{
    // Torre - For

    printf("\n");
    printf("===== Torre =====\n");

    int torre = 5;
    for (int i = 0; i < torre; i++)
    {
        printf("Direita\n");
    }

    // Bispo - while

    printf("\n");
    printf("===== Bispo =====\n");
    int bispo = 1;
    while (bispo <= 5)
    {
        bispo++;
        printf("Cima direita\n");
    }

    // Rainha - do while
    
    printf("\n");
    printf("===== Rainha =====\n");
    int rainha = 1;
    
    do
    {
        rainha++;
        printf("Esquerda \n");
    } while (rainha <= 8);
    
    // Cavlo - for and while

    printf("\n");
    printf("===== Cavalo =====\n");
    int movimentoVertical = 2;   // duas casas para baixo
    int movimentoHorizontal = 1; // uma casa para esquerda

    // Loop externo (for) → controla o movimento vertical
    for (int i = 0; i < movimentoVertical; i++)
    {
        printf("Baixo\n");

        // Loop interno (while) → executa após o último movimento vertical
        if (i == movimentoVertical - 1)
        {
            int contador = 0;

            while (contador < movimentoHorizontal)
            {
                printf("Esquerda\n");
                contador++;
            }
        }
    }
}

