// 1.
// function ->[User input]

// name,surname,email,password
// email,password->compare

// logged in succesfully
// logged in fail

#include<stdio.h>
#include<string.h>
#include<conio.h>

int data()
{
    char name[50] = "Prakash";
    char surname[50] = "Makwana";
    char email[50] = "Prakash@gmail.com";
    char password[50] = "Prakash123";
    char email2[50];
    char password2[50];
    
    printf("Enter Your Email: ");
    scanf("%s", &email2);
        
    printf("Enter Your Password: ");
    scanf("%s", &password2);
    
    
    if(strcmp(email2,email) == 0 && strcmp(password2,password) == 0)
    {
        printf("Logged in Succesfully");
    }
    else
    {
        printf("Logged in failed");
    }
    
    return 0;
}

void main()
{
    
    data();
    
    getch();
}