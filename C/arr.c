#include <stdio.h>
int main(){
    int i,a[4] = {34,56,34,54};
    for(i=0 ; i < 4; i++){
        printf("%d\n",a[i]);
    }
    printf("%d\n",a[1]);

    return 0;
}