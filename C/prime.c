#include<stdio.h>
#include<conio.h>
int main(){

    int a ;

    printf("Enter the number \n");
    scanf("%d",&a);

    if(a%2==0){
        printf("Number %d is Prime number \n",a);
    }
    else{

        printf("Number %d is not a Prime number \n",a);
    }

    return 0;
}