#include <stdio.h>
int main(){
    int i ,n,f1=1,f2=2,f3;

    printf("Enter the number \n");
    scanf("%d",&n);

    f3=f1+f2;
    printf("%d \n%d \n",f1,f2);

    for ( i = 1; i < n; i++)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
    printf("%d\n",f2);
    }

    return 0;

}







