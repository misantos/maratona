#include <stdio.h>
 
double calculosimples(int numpecas1, int numpecas2, double preco1, double preco2){
    double mult1 = numpecas1 * preco1;
    double mult2 = numpecas2 * preco2;

    double soma = mult1 + mult2;

    return soma;
}

int main() {
    
    int codpeca1, npecas1, codpeca2, npecas2;
    double precopeca1, precopeca2;

    //printf("Digite o codigo, o numero de peças e o valor da peça 1: ");
    scanf("%d %d %lf", &codpeca1, &npecas1, &precopeca1);
    //printf("Digite o codigo, o numero de peças e o valor da peça 2: ");
    scanf("%d %d %lf", &codpeca2, &npecas2, &precopeca2);
    double resultado;
    resultado = calculosimples(npecas1, npecas2, precopeca1, precopeca2);
    printf("VALOR A PAGAR: R$ %.2lf\n", resultado);
 
    return 0;
}