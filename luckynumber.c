    #include <stdio.h>
     
    int main() {
        
        char c;
        int count=0;
        scanf("%c", &c);
        while (c != '\n'){
            if (c == '4' || c == '7'){
                count++;
            }
            scanf("%c", &c);
        }
        if (count == 4 || count == 7){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
        return 0;
    }