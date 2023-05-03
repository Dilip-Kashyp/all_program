#include<stdio.h>
#include<conio.h>
void main()
{
    int age ;
    printf("Enter the age\n");
    scanf("%d",&age);
    if (age<16)
    {
    printf("You can not vote");
    }
    else if ( age > 16 && age < 18  )
    {
        printf("You can not vote but you can apply for voter card");
    }
    else
    {
        printf("You can vote");
    }
    getch();
}