// Write a C program to create a file, write a string into it, close the file, then 
// open the file again to read and display its contents.

#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    
    printf("Enter Your Name: ");
    scanf("%s", &name);
    
    FILE *fp;
    fp = fopen("test.txt", "w");
    
    fprintf(fp, "%s", name);
    
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    
    fscanf(fp, "%s", name);
    
    printf("\nYour Name is: %s", name);
    
    fclose(fp);
    
    return 0;
}