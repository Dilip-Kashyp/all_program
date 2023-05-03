#include<stdio.h>
#include<conio.h>
int sum(int x , int y);
void main(){
    int b ;

    b = sum(5,6);

    printf("%d\n",b);

    getch();
}
int sum(int x , int y){
    int z ;
    z = x + y ;
     return(z);

}