#include <stdio.h>

int main()
{
    int i,j,k,row;
    
    printf("Enter a rows numbers:");
    scanf("%d",&row);
    
    for(i=1;i<=row;i++){
        for(j=0;j<row-i;j++)
            printf("  ");
        for(k=i;k<=2*i-1;k++)
            printf("* ");
        for(k=0;k<i-1;k++)
           printf("* ");
           
        printf("\n");   
    }
     for(i=row-1;i>=1;i--){
        for(j=0;j<row-i;j++)
            printf("  ");
        for(k=i;k<=2*i-1;k++)
            printf("* ");
        for(k=0;k<i-1;k++)
           printf("* ");
           
        printf("\n");   
    }
   
  return 0;
  }
