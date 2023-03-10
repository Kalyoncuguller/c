#include <stdio.h>

int main()
{
    int i,j,k;
    printf("Enter the number of lines:");
    scanf("%d",&k);
    
    for(i=0;i<=k;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
            
        }
        printf("\n");
    }

    return 0;
}
