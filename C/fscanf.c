#include <stdio.h>  
#include <stdlib.h>
int main(){  
   FILE *fp;  
   char c[200];
   fp = fopen("file.txt", "r"); //opening file  
    if(fp==NULL){
		printf("Error");
		exit(0);
	}
	else{
    while(fscanf(fp,"%s",c)!=EOF){  
   printf("%s ", c);  
   }  
    }

   return 0; 
}  