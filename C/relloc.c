#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n = 5, i;
    ptr = (int*)malloc(n*sizeof(int));
    
   for (i = 0; i < n; i++) {
            ptr[i] = i + 1;
        }

 
    for (i = 0; i < n; i++) {
            printf("The elements of the array are: %d \n",ptr[i]);
        }


    n = 10 ;

    printf("The new size of the array: %d\n", n);
    
    ptr = realloc(ptr, n * sizeof(int));

    for (i = 0; i < n; i++) {
            ptr[i] = i + 1;
        }

 
    for (i = 0; i < n; i++) {
            printf("The elements of the array are: %d \n",ptr[i]);
        }

    
    return 0;
    }
 
