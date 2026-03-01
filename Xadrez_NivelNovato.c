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
    }