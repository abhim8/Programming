#include <stdio.h>
#include <stdlib.h>

void binary(){
	
	long n, num, remainder, base = 1, binary = 0;
	printf("Enter a decimal integer(0-255) to convert into binary: ");
	scanf("%ld", &n);
			num = n;
			while (n > 0)
			{
				remainder = n % 2;
				binary = binary + remainder * base;
				n = n / 2;
				base = base * 10;
			}
				printf("\n Input number is = %d\n", num);
				printf("\n Its binary equivalent is = %ld\n", binary);
			printf("\n");
		
}

void main() {

		while(1){
			printf("\n *************  MENU  *************\n \n 1.CONVERT A NUM TO BINARY \n 2.EXIT\n");
			int choice;
			scanf("%d",&choice);
			switch(choice){
				case 1: binary(); break;
				case 2: exit (0);

				default: printf("Wrong Choice!!! Choose again");	
			}
		}
  	  

    }

