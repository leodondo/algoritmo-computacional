/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void exibirEstoque(int estoque[], int tamanho) {
    int i;

    for(i = 0; i < tamanho; i++) {
        printf("%d ", estoque[i]);
    }

    printf("\n");
}

void selectSort(int estoque[], int tamanho) {
    int i, j, posicaoMenor, auxiliar;

    for(i = 0; i < tamanho - 1; i++) {
        posicaoMenor = i;

        for(j = i + 1; j < tamanho; j++) {
            if(estoque[posicaoMenor] > estoque[j]) {
                posicaoMenor = j;
            }
        }

        auxiliar = estoque[i];
        estoque[i] = estoque[posicaoMenor];
        estoque[posicaoMenor] = auxiliar;
    }
}

int main(void) {
    int estoque[6] = {18, 5, 27, 12, 9, 21};
    int tamanho = 6;

    printf("Estoque antes da organizacao:\n");
    exibirEstoque(estoque, tamanho);

    selectSort(estoque, tamanho);

    printf("\nEstoque depois da ordenacao:\n");
    exibirEstoque(estoque, tamanho);

    return 0;
}

