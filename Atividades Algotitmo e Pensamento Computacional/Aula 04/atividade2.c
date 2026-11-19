/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hora, minuto, total;

    printf("Que horas sao (Horas): ");
    scanf("%d", &hora);

    printf("Que horas sao? (Minutos): ");
    scanf("%d", &minuto);

    total = hora * 60 + minuto;

    printf("Total em minutos: %d\n", total);
    printf("Ja se passaram %d minutos",total);
    
    return 0;
}
