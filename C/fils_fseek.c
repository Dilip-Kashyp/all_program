#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* fp;
    fp = fopen("abc.txt", "r");
    if(fp==NULL){
		printf("Error");
		exit(0);
	}
	else{
    fseek(fp, 0, SEEK_END);

    printf("%d", ftell(fp));}
  
    return 0;
}