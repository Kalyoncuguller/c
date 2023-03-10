#include <stdio.h>
int main(){
    FILE *file =fopen("file.txt","a");
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num < 100){
        fprintf(file,"%d\n",num);
        fclose(file);
        FILE *file=fopen("dosya.txt","r");
        while(fscanf(file,"%d",&num) != EOF)
            printf("%d\n",num);
    }
    else{
        printf("Enter a number less than 100!");
    }
}
