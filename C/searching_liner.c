#include <stdio.h>
int main(){
    int num[4],sa,i=0;
    int loc = -1;
    num[0]=34;
    num[1]=44;
    num[2]=36;
    num[3]=67;

    printf("enter the number\n");
    scanf("%d",&sa);

    while (i<=3 && num[i]!=sa) 
    {
        i++;
    }
    loc = i ;

    printf("%d\n",i);




    return 0;
}