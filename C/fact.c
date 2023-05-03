#include <stdio.h>
#include <conio.h>
int fact(int n);
void main(){
    int a ,b;
    printf("Enter the number \n");
    scanf("%d",&a);
    b = fact(a);
    printf("The factotial of %d is %d",a,b);

getch();
}
int fact(int n){
    int b ;
    if(n==0)
        return 1;
    
    else
         b = (n*fact(n-1));
    
    return(b);
}