#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* fp;
    fp = fopen("file.txt", "w+");
    if(fp==NULL){
		printf("Error");
		exit(0);
	}
	else{
    fprintf(fp,"This code write by Dilip Kumar\n");
    rewind(fp);
    // reading from file
    char ch[50];
    fscanf(fp, "%[^\n]s", ch);
  
    printf("%s", ch);
    }
  
    return 0;
}