/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *arquivo;
    char linha[100];

    arquivo = fopen("tabuada.txt", "r");

    if (arquivo == NULL)
    {
        printf("Nao foi possivel ler o arquivo.\n");
        return 1;
    }

    printf("Conteudo do arquivo:\n");

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}
