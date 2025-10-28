#include <stdio.h>
#include <conio.h>

void main()
{
    int pizza=100,burger=70,coffee=120,total=0;
    int choice,table_no;
    
    printf("Enter Your Table No:");
    scanf("%d",&table_no);
    
    do
    { 
        printf("\n Enter 1 For pizza - Rs. 100 \n Enter 2 For Burger - Rs. 70 \n Enter 3 for Coffee - Rs. 120 \n press 0 for Exit  \n \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:total+=pizza;
            break;
            
            case 2:total+=burger;
            break;
            
            case 3:total+=coffee;
            break;
        }
    }
    while(choice!=0);
    
    printf("Your Total Bill is %d",total);
    
	getch();
}