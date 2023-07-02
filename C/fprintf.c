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
    fprintf(fp, "Hello file by fprintf...\n");  //writing data into file  
    fclose(fp); //closing file 
    }

   return 0; 
}  