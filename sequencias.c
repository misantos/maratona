#include <stdio.h>
 
int main() {
    
    int x, y;
    int i;
    scanf("%d %d", &x, &y);
    if (x <= 0 || x >= 20){
        return 0;
    } else if (y >= 100000){
        return 0;
    }
    
    for ( i = 1; i < y; i++){
        int salva = i % x;
        if (salva == 0) {
            printf("%d\n", i);                                                                                                                                                                                     
        } else{
            printf("%d ", i);
        }     
    }
    printf("%d\n", y);
    
    return 0;
}