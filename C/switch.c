# include <stdio.h>
int main(){
    int marks;
    printf("Enter you marks \n");
    scanf("%d",&marks);
    switch(marks/10){
        case 10:
        case 9:
        printf("you grade is A\n");
        break;
        case 8:
        case 7:
        printf("you grade is B\n");
        break;
        case 6:
        case 5:
        printf("you grade is C\n");
        break;
    
    default:
       printf("You are fail \n");
        break;
    }










    return 0;
}
