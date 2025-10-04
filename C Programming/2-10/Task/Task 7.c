// 7. Write a program to calculate sum of 5 subjects & find the percentage.
// Subject marks entered by user.

#include <stdio.h>
#include <conio.h>
void main()
{
    int Gujarati,Hindi,English,Maths,Science;
    
    printf("Enter a marks of Gujarati: ");
    scanf("%d", &Gujarati);
    
    printf("Enter a marks of Hindi: ");
    scanf("%d", &Hindi);
    
    printf("Enter a marks of English: ");
    scanf("%d", &English);
    
    printf("Enter a marks of Maths: ");
    scanf("%d", &Maths);
    
    printf("Enter a marks of Science: ");
    scanf("%d", &Science);
    
    int marks = Gujarati+Hindi+English+Maths+Science;
    printf("Total Marks is %d", marks);
    
    float per = marks/5;
    printf("\nPercentage is %f", per);
    
    getch();
}