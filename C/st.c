#include <stdio.h>
struct student{
    int rollno ;
    char name[20];
    float  fee;

}Dilip= {20 ,"Dilip",140.6}; // initialised at compile time 

int main(){


    printf("%s\n",Dilip.name);
    printf("%d\n",Dilip.rollno);
    printf("%.2f\n",Dilip.fee);
    
    return 0;
}