#include <stdio.h>
int main(){
    int a , b , d;

    char c ;
    printf("Enter the value \n");
    scanf("%d",&a);

    printf("Enter the operator\n + - * /   \n");
    scanf(" %c",&c);
    

    printf("Enter the value \n");
    scanf("%d",&b);

    printf("*********\n");

    switch(c)
    {
    
    case '+': d = a + b ;
        printf("%d + %d = %d\n ",a , b , d );
        break;
        
    case '-': d = a - b ;
        printf("%d - %d = %d\n ",a , b , d );
        break;
    
    case '/': d = a / b ;
        printf("%d / %d = %d\n ",a , b , d );
        break;

    case '*': d = a * b ;
        printf("%d * %d = %d\n ",a , b , d );
        break;
    
    default:printf("invalid operation\n");
        break;
    }



    return 0 ;
}