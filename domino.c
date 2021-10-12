#include <stdio.h>
 
int main() {
 
    int n;
    int domino;
    scanf("%d",&n);
    if(n >= 0 && n <= 10000){
        domino = ((n+1)*(n+2)) / 2;
        printf("%d\n",domino);
    }
    return 0;
}