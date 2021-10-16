#include <stdio.h>
 
int main() {
    
    int n; int i, count=0;
    scanf("%d ", &n);
    char vetorgabarito[n];
    char vetorresposta[n];
    
    for (i = 0; i < n; i++){
        scanf("%c", &vetorgabarito[i]);
    }
    scanf(" ");
    for (i = 0; i < n; i++){
        scanf("%c", &vetorresposta[i]);
    }
    for (i = 0; i < n; i++){
        if (vetorgabarito[i] ==  vetorresposta[i]){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}