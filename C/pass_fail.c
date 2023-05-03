#include <stdio.h>
int main()
{
    int english, math, hindi;
    float marks;
    printf("Enter English marks \n");
    scanf("%d", &english);

    printf("Enter Math marks \n");
    scanf("%d", &math);

    printf("Enter Hindi marks \n");
    scanf("%d", &hindi);

    marks = (english + math + hindi) / 3;

    if ((marks < 40) || english < 33 || math < 33 || hindi < 33)
    {
        printf("you total percantage is  %f and you are fail \n", marks);
    }
        else
        {
            printf("you total percantage is %f amd you are pass\n", marks);
        }
    
    return 0;
}
