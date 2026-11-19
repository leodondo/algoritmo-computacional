/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main()
{
    float media, frequencia;

    printf("Digite sua frequencia: ");
    scanf("%f", &frequencia);

    printf("Digite sua media: ");
    scanf("%f", &media);

    if (frequencia < 75.0) {
        printf("Reprovado por falta.\n");
    }
    else {
        if (media >= 6.0) {
            printf("Voce foi aprovado :)\n");
        }
        else {
            printf("Reprovado por media :(\n");
        }
    }

    return 0;
}
