#include <stdio.h>
int pass( int *);
int main(){
    int i = 5 ;
    printf("The adderss of i is %d \n",i);
    
    pass(&i);
    //printf("the adderss of is for funcation %u",i);
    return 0 ;

}
int pass(int *i){


    *i  = *i*10;

    printf("the adderss of i in funcation %d",*i);


}