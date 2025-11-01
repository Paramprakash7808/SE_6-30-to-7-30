#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}