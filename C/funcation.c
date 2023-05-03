#include <stdio.h>
int fact(int );
int main(){
    int m , r ;

    printf("Enter the number \n");
    scanf("%d",&r);

    m=fact(r);

    printf("%d",m);
    return 0;
}
int fact(int x){
    int c;
    if(x==1){
        return(x);
}
    else{
        c=x*fact(x-1);
        return(c);
    
    }
}