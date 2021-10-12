#include <stdio.h>
 
int main() {
 
    double nota1, nota2, nota3, nota4, notaexame;
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);
    nota1 = nota1 * 2;
    nota2 = nota2 * 3;
    nota3 = nota3 * 4;
    nota4 = nota4 * 1;

    double media = (nota1 + nota2 + nota3 + nota4) / 10;
    printf("Media: %.1lf\n", media);
    if(media >= 7.0)
        printf("Aluno aprovado.\n");
    else if(media >= 5.0 && media < 7.0){
        printf("Aluno em exame.\n");
        scanf("%lf", &notaexame);
        printf("Nota do exame: %.1lf\n",notaexame);
        media = (media + notaexame) / 2;
        if(media >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", media);
    }
        
    else
        printf("Aluno reprovado.\n");
 
    return 0;
}