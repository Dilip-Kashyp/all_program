#include <stdio.h>
#include <conio.h>
int main(){
    int a[4] ; // declaring array 
    // int mark[5] = {19, 10, 8, 17, 9}; *anothe method to initialize an array
    int i ; 

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]); // taking input from user 
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]); // printing the data in array
    }
    
    return 0;
}