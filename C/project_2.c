#include <stdio.h>
int main(){
    int a  ,c,d;
    char b;

    printf("Enter the 1st number\n");
    scanf("%d",&a);

    printf("Enter the operater \n + , - , * ,  / \n");
    scanf(" %c",&b);

    printf("Enter the 2nd number\n");
    scanf("%d",&c);

    switch(b)
    {
    case '+': d=a+c;
        printf("%d + %d = %d\n",a,c,d);
        break;
        
    case '-': d=a-c;
        printf("%d - %d = %d\n",a,c,d);
        break;

    case '*': d=a*c;
        printf("%d * %d = %d\n",a,c,d);
        break;

    case '%': d=a%c;
        printf("%d % %d = %d\n",a,c,d);
        break;

    case '/': d=a/c;
        printf("%d / %d = %d",a,c,d);
        break;
    
    }








    return 0;
}