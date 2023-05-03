#include <stdio.h>
int main()
{
    int a;
    printf("Enter your age :\n");
    scanf("%d", &a) ;
    if (a>=18)
    {
        printf("You are %d,So you can drive\n",a);
    }
    else
    {
        printf("sorry you are under 18 you cann't drive\n");
    }
    return 0;
}
