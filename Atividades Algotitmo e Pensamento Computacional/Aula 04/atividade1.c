/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int manha,tarde,soma;
    printf("Quantidade recebida pela manhã:") ;
    scanf("%d",&manha);
    printf("Quantidade recebidada a tarde?");
    scanf("%d",&tarde);
    
    soma = manha + tarde;
    printf("Total de produtos recebidos no dia:%d",soma);
    
    return 0;
}