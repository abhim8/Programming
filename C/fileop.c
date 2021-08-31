#include <stdio.h> 
#include <stdlib.h>  

int main() { 
	FILE *fptr1, *fptr2; 
	char filename[100], c;

	printf("Enter the first filename: "); scanf("%s", filename); 
	fptr1 = fopen(filename, "r"); 
	if (fptr1 == NULL) { exit(0); } 

	printf("Enter the second filename: "); scanf("%s", filename); 
	fptr2 = fopen(filename, "w"); 
	if (fptr2 == NULL) { exit(0); } 

	c = fgetc(fptr1); 
	while (c != EOF) { 
		if(c =='('){ c = ' '; }
		if(c == ')'){ c = '\n'; }
		fputc(c, fptr2); 
		//printf("%c",c);
		c = fgetc(fptr1);
	} 

	printf("\nContents copied\n"); 
	fclose(fptr1); 
	fclose(fptr2); 

	return 0; 
}
