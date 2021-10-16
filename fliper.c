#include <stdio.h>
 
int main() {
    
    int p, r;
    scanf("%d %d", &p, &r);
    if (p > 1 || p < 0) {
        return 0;
    }else if (r > 1 || r < 0){
        return 0;
    }

    if (p == 0){
        printf("C\n");
    } else if (p == 1 && r ==0){
        printf("B\n");
    } else if (p == 1 && r == 1){
        printf("A\n");
    }
    return 0;
}