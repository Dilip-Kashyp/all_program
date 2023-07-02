#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	char c ;
	FILE *fp;
    int i ;
	fp = fopen("abcdf.txt","w");
	if(fp==NULL){
		printf("Error");
		exit(0);
	}
	else{
        for (i =1; i<= 10; i++){
        putw (i,fp);
   }
    }
		return 0;
		}

