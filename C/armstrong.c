#include <stdio.h>
int main()
{
    int n, b, sum = 0, a,temp;
    
    printf("enter the number= ");
    scanf("%d",&n);
    temp = n;
    while (n > 0)
    {
        b = n % 10;
        sum = sum + (b * b * b);
        n = n / 10;
    }
    if (temp == sum)
        printf("armstrong  number ");
    else
        printf("not armstrong number");
    return 0;
}