// Login System
// 1.
// Concepts:Strings,File I/O,Condition and logic

// ask user do you want to signup or login?
// case 1: signup
// case 2: login

// when user signup data should be write on file and detail should be stored
// when user press login case at that time compare that data with stored file data

// Allow Login if matched else deny acccess.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void signup();
void login();

int main()
{
    int choice;
    
    printf("Press 1 for Signup");
    printf("\nPress 2 for Login");
    
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);
    getchar();
    
    switch(choice)
    {
        case 1:
        signup();
        break;
        
        case 2:
        login();
        break;
        
        default:
        printf("Invalid Choice");
    }
    
    return 0;
}

void signup()
{
    char name[50],pass[50];
    
    FILE *fp;
    
    printf("Enter Username: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    
    printf("Enter Password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = 0;
    
    fp = fopen("Data.txt", "a");
    if(fp == NULL)
    {
        printf("Error Opening a File");
        return;
    }
    
    fprintf(fp, "%s %s\n", name, pass);
    fclose(fp);
    
    printf("\nSignup Successfully Now You Can Login");
}

void login()
{
    char name[50],pass[50];
    char file_name[50],file_pass[50];
    int found = 0;
    
    printf("Enter Username: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    
    printf("Enter Password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = 0;
    
    FILE *fp;
    fp = fopen("Data.txt", "r");
    if(fp == NULL)
    {
        printf("\nNo Data Found, Signup First");
        return;
    }
    
    while(fscanf(fp, "%s %s", file_name,file_pass) != EOF)
    {
        if(strcmp(name, file_name) == 0 && strcmp(pass, file_pass) == 0)
        {
            found = 1;
            break;
        }
    }
    fclose(fp);
    
    if(found)
    {
        printf("Login Successful, %s.\n", name);
    }
    else
    {
        printf("Invalid Username and Password");
    }
}