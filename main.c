
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("input any string\n");
    scanf("%s", str);
    
    int length = strlen(str);
    
    for (int i= length; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n\n");
    
    printf("Hello World\n");
    for (int j = 1; j<=4; j++){
        for (int k = 1; k <=4 - j; k++){
            printf(" ");
        }
        for (int q= 1; q<= j; q++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
