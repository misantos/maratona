#include <stdio.h>
 
int main() {
    int tempoHoras, velMedia;
    scanf("%d %d", &tempoHoras,&velMedia);
    double tempoVelocidade = velMedia * tempoHoras;
    double resultado = tempoVelocidade / 12;
    printf("%.3lf\n", resultado);
 
    return 0;
}