#include <stdio.h>
 
int main() {
 
    int n,i;
    int nsequencias[40];
    nsequencias[0] = 1;
    nsequencias[1] = 2;
    scanf("%d",&n);
    while (n > 0 && n <= 40)
    {
        for(i = 2; i < n; i++) {
            nsequencias[i] = nsequencias[i-1] + nsequencias[i-2];
        }
        printf("%d\n",nsequencias[n-1]);
        scanf("%d",&n);
    }
    
    return 0;
}