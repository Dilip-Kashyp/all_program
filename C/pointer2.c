#include <stdio.h>
void  sum(int *a , int *b );
int main (){

    int a , b ,c;

    printf("Enter the number \n");
    scanf("%d",&a);

    printf("Enter the number \n");
    scanf("%d",&b);


    printf("before swaping  %d  %d\n",a , b );

    sum(&a, &b);

    printf("after swaping  %d  %d",a , b );
    return 0 ;
}
void sum(int *x, int *y ){

    int a ;
     a = *x ;
    *x = *y ;
    *y = a ;
    
}