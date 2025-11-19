#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char c;
    
    fp = fopen("Data.txt", "w");
    
    printf("Enter Any Character: ");
    while((c = getchar()) != '0')
    {
        putc(c, fp);
    }
    fclose(fp);
    
    printf("\nRead Data: ");
    fp = fopen("Data.txt", "r");
    while((c = getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    
    return 0;
}