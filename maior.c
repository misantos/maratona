#include <stdio.h>
 
int main() {
    
    int vetor[100];
    int numero, i=0,j;
    scanf("%d",&numero);
    if (numero == 0 && numero < 0){
        return 0;
    }
    
    while(numero != 0 ){
        vetor[i] = numero;
        i++;
        scanf("%d",&numero);
    }
    int maior=vetor[0];
    if (i == 1){
        printf("%d\n", maior);
        return 0;
    }
    
    for(j=1;j<=i;j++){
        if(maior < vetor[j])
            maior = vetor[j];
    }
 
    printf("%d\n", maior);
    return 0;
}