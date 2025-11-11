#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[50];
}s1;

void main()
{
    FILE *fp;
    fp = fopen("Name.txt", "w");
    
    printf("Enter Your Id: ");
    scanf("%d", &s1.id);
    
    printf("Enter Your Name: ");
    scanf("%s", &s1.name);
    
    printf("\nYour Id is: %d", s1.id);
    printf("\nYour Name is: %s", s1.name);
    
    fprintf(fp, s1.name);
    fclose(fp);
    
    getch();
}
