#include <stdio.h>
#define PI 3.14159

int main() {
float raio, perimetro;
printf("Qual a medida do raio (em cm)? ");
scanf("%f", &raio);
perimetro = 2 * PI * raio;
printf("O perimetro da circunferencia e %.2f cm\n", perimetro);

return 0;
}