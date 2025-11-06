#include<stdio.h>
#include<conio.h>
int main()
{
    int subjects,i,total = 0;
    float per = 0;
    
    printf("Enter Number of Subjects: ");
    scanf("%d", &subjects);
    
    int marks[subjects];
    
    for(i = 0; i < subjects; i++)
    {
        printf("Enter Marks for Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    for(i = 0; i < subjects; i++)
    {
        printf("\nMarks of Subject is %d", marks[i]);
    }
    
    for(i = 0; i < subjects; i++)
    {
        total += marks[i];
    }
    
    printf("\nTotal is %d", total);
    per = total/subjects;
    printf("\nPercentage is %f", per);
    
    return 0;
}