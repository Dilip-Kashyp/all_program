# include <stdio.h>
int main()
{
    int num1,num2,num3,num4,g;

    printf("Enter the number 1\n");
    scanf("%d",&num1);

    printf("Enter the number 2 \n");
    scanf("%d",&num2);
   
    printf("Enter the number 3\n");
    scanf("%d",&num3);

    printf("Enter the number 4 \n");
    scanf("%d",&num4);  

    if(num1 > num2 && num1 > num3 && num1 > num4 )
        {
           printf("%d is gratest\n",num1);
        }

    if(num2 > num1 && num2 > num3 && num2 > num4 )
        {
           printf("%d is gratest\n",num2);
        }

    if(num3 > num1 && num3 > num2 && num3> num4 )
        {
           printf("%d is gratest\n",num3);
        }

     if(num4 > num1 && num4 > num2 && num4 > num3 )
        {
           printf("%d is gratest\n",num4);
        }

    return 0;
}