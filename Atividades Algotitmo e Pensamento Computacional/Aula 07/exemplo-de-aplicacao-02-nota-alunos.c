#include <stdio.h>

int main() {
    int quantidadeAlunos;
    float nota, somaNotas = 0.0f, mediaTurma;
    
    do{
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);
    if(quantidadeAlunos<=0){
        printf("Quantidade inválida de alunos \n");
    }
        
    }while(quantidadeAlunos<=0);
    
    
    for(int i = 1; i<=quantidadeAlunos; i++){
        do{
            printf("Digite a nota do aluno %d: ", i);
            scanf("%f", &nota);
            if(nota<0 || nota>10){
                printf("Nota inválida, digite novamente!");
            }
        }while(nota<0 || nota>10);
        
        somaNotas += nota;
    }
    
    mediaTurma =somaNotas/quantidadeAlunos;
    
    printf("A média da turma é: %.2f \n", mediaTurma);
    
    return 0;
}
