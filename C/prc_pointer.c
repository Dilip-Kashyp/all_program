#include <stdio.h>
int sumandavg(int a , int b , int *sum , float *avg);
int main(){

    int sum ,a ,b;
    float avg;

    printf("Enter the number \n");
    scanf("%d",&a);

    printf("Enter the 2nd  number \n");
    scanf("%d",&b);

    sumandavg(a,b,&sum , &avg);

    printf("sum of these number is %d\n",sum);

    printf("avg of these number is %.2f",avg);

    return 0 ;
}
int sumandavg( int a , int b , int *sum , float *avg){

    *sum = a + b;

    *avg = *sum/2.00;
}