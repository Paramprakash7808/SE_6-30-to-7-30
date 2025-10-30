#include<stdio.h>
#include<math.h>
int main()
{
    char name[50];
    
    printf("Enter Your Name: ");
    scanf("%s", &name);
    
    printf("%s", strlwr(name));
    
    return 0;
}