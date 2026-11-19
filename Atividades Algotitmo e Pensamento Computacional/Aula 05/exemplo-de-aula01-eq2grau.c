/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    x1 = (-b + sqrtf(delta)) / (2 * a);
    x2 = (-b - sqrtf(delta)) / (2 * a);

    printf("\nO valor da primeira raiz é: %.2f", x1);
    printf("\nO valor da segunda raiz é: %.2f", x2);

    return 0;
}