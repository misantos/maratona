#include <stdio.h>
 
int main() {
    
    int n,num, count=0;
    int a =0, b=0, aux;
    scanf("%d", &n);
    aux = n;
    while (n != 0){
        scanf("%d",&num);
        n--;
        if (num == 2){
            count++;
        }
    }
    if ((aux%2)==0){
        printf("%d\n", a);
    }else{
        a = 1;
        printf("%d\n", a);
    }

    if ((count%2)==0){
        printf("%d\n",b);
    }else{
        b = 1;
        printf("%d\n",b);
    }
    
    return 0;
}