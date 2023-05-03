#include <stdio.h>
int main(){
    int marks[4] ; 
    float total  ,per;

    printf("Enter the marks of English \n");
    scanf("%d",&marks[0]);

    printf("Enter the marks of Math \n");
    scanf("%d",&marks[2]);

    printf("Enter the marks of Computer\n");
    scanf("%d",&marks[3]); 
    
    printf("Enter the marks of Hindi \n");
    scanf("%d",&marks[4]);

    total = marks[1] +  marks[2] +  marks[3] +  marks[4] +  marks[0] ;

    per = (total*100)/400;

    

    if(per > 80)
        printf("Congrutulations , you passed with %.2f percentage and you get merit position\n",per);

    else if ((per < 80 ) && (60 < per))
        printf("Congrutulations , you passed with %.2f percentage and you get 1st position\n",per); 

    else if ((per < 60 ) && (40 < per))
        printf("Congrutulations , you passed with %.2f percentage and you get 2st position\n",per);

     else if ((per < 40 ) && (30 < per))
        printf("Congrutulations , you passed with %.2f percentage and you get 3st position\n",per);

    else
        printf("You are failed, %.2f %\n ",per);

     return 0;
}