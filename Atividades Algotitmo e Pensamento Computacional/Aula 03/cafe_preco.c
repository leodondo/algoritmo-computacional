#include <stdio.h>

int main() {
    int quantidade;
    float preço, total;
    printf("Digite a quantidade de cafes:");
    scanf("%d", &quantidade);
    printf("Digite o preço do cafe:");
    scanf("%f",&preço);
    total = quantidade * preço;
    printf("Valor total da compra:R$ %.2f\n", total);
    return 0;
}
