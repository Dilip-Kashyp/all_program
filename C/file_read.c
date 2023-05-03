#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(){
	char c ;
	FILE *f;
	f = fopen("abc.text","r");
	if(f==NULL){
		printf("Error");
		exit(0);
	}
	else
		while((c=getc(f))!=EOF){
			printf("%c",c);
			
		}
		getch();
}