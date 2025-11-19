#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char c;
    
    printf("Read Data: ");
    fp = fopen("Data.txt", "r");
    while((c = getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    
    return 0;
}