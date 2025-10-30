#include<stdio.h>
#include<string.h>
int main()
{
    
    char pass[50];
    char pass2[50] = "Prakash123";
    
    printf("Enter a Password: ");
    scanf("%s", &pass);
    
    do
    {
        printf("Enter a Password: ");
        scanf("%s", &pass);
    }
    while(strcmp(pass2,pass) != 0);
    
    printf("Congratulations");
    
    return 0;
}