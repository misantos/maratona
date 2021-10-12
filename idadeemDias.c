#include <stdio.h>
 
int main() {
 
    int numerodias;
    scanf("%d",&numerodias);
    int ano, mes, dia;
    ano = numerodias / 365;
    int teste = numerodias % 365;
    mes = teste / 30;
    dia = teste % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano,mes, dia);
 
    return 0;
}