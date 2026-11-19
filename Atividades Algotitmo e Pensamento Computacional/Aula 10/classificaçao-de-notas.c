
#include <stdio.h>

void exibirVetor(float vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("%.1f ", vetor[i]);
    }

    printf("\n");
}

/*----------------------------------------------*/

void bubbleSort(float vetor[], int tamanho)
{
    int i, j;
    float auxiliar;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - 1 - i; j++)
        {
            if (vetor[j] < vetor[j + 1])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

/*----------------------------------------------*/

int main(void)
{
    float notas[5] = {6.5, 9.0, 7.5, 5.0, 8.0};

    int tamanhoNotas = 5;

    printf("Notas de Classificacao:\n");
    exibirVetor(notas, tamanhoNotas);

    bubbleSort(notas, tamanhoNotas);

    printf("\nNotas depois da Classificacao:\n");
    exibirVetor(notas, tamanhoNotas);

    return 0;
}
