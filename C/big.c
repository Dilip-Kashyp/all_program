#include <stdio.h>
int main(){
    int num1 , num2 , num3 ;

    printf("Enter the 1st number \n");
    scanf("%d",&num1);

    printf("Enter the 2nd number \n");
    scanf("%d",&num2);

    printf("Enter the 3rd number \n");
    scanf("%d",&num3);

    if(num1 > num2)
      if(num1 > num3)
        printf("%d is greater\n",num1);
             else
                printf("%d is greater\n",num3);
        
    else
        if(num2 > num3)
         printf("%d is greater\n",num2);
           else
            printf("%d is greater\n",num3);








return 0 ;
}