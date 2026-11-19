/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{ 
    int rodada= 1;
    int pontuação;
    int total =0;
    
    while(rodada <= 3 ){
        printf("Digite os pontos da rodada %d:" , rodada);
        scanf("%d", &pontuação);
        
        rodada++;
        total = total + pontuação;
        
    }
    printf("O valor total de pontos é: %d", total);
    return 0;
    
}