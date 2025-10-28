#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ch[40];
    
    printf("Enter a Name: ");
    scanf("%s", &ch);
    
    printf("Your Name is %s", ch);
    printf("\nlength is %d", strlen(ch));
    
    getch();
}