#include <stdio.h>
#include <conio.h>
void main()
{
    int Gujarati = 65;
    int Hindi = 87;
    int English = 54;
    int Maths = 82;
    int drawing = 56;
    
    int marks = Gujarati+Hindi+English+Maths+drawing;
    printf("Marks are %d", marks);
    
    float per = marks/5;
    printf("\nPercentage are %f", per);
    
    getch();
}