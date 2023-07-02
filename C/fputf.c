#include <stdio.h>  
#include <stdlib.h>
int main(){  
   FILE *fp;  
   fp = fopen("file.txt", "w"); //opening file  
    if(fp==NULL){
		printf("Error");
		exit(0);
	}
	else{
    fputc('a',fp);//writing single character into file    
    fclose(fp); //closing file 
    }

   return 0; 
}  