#include <stdio.h>
 
int main() {
    
    double x, y;
    double divisao;
    scanf("%lf %lf", &x, &y);
    divisao = x / y;
    printf("%.2lf\n", divisao);
    return 0;
}