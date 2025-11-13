//  Login System
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

void main()
{
    int choice;
    char name[50],email[50],phone[10],pass[50],name1[50],pass1[50];
    FILE *fp;
    printf("do you want to signup or login?");
    printf("\nEnter 1 for Signup and 2 for Login");
    scanf("%d", &choice);
   
    fp = fopen("signup.txt", "w");
   
    switch(choice)
    {
        case 1:
        printf("Enter Your Name: ");
        scanf("%s", &name);
       
        printf("Enter Your Email: ");
        scanf("%s", &email);
       
        printf("Enter Your Phone Number: ");
        scanf("%s", &phone);
       
        printf("Enter Your Password: ");
        scanf("%s", &pass);
       
        fprintf(fp, name);
        fprintf(fp, email);
        fprintf(fp, phone);
        fprintf(fp, pass);
   
        break;
    }

    fclose(fp);
   
    getch();
}