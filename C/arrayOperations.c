#include <stdio.h>  
#include <stdlib.h>  
int i,n, arr[100], arr2[100], flag=0;
	
void arrIn(){
	printf("enter no.of elements in the array :\n");  
	scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);  
    for(i=0; i<n; i++){  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }	
    flag=1;
}
void CopyArr(){
	if(flag == 0){
		printf("First Insert Array 1!!!\n");
		return;
	}
	/* Copy elements of first array into second array.*/ 
    for(i=0; i<n; i++)
        arr2[i] = arr[i];
    
	printf("Array-1 Elements have been copied to Array-2\n");
    flag=1;
}
void PrintArr1(){
	if(flag == 0){
		printf("Array Is Empty!!!\n");
		return;
	}
	printf("\nElements in array-1 are: ");
	for(i=0; i<n; i++)
	    printf("element %d - %d : ",i,arr[i]);
    
    printf("\n");
}
void PrintArr2(){
	if(flag == 0){
		printf("Array Is Empty!!!\n");
		return;
	}
	printf("\nElements in array-2 are: ");
	for(i=0; i<n; i++)
	    printf("element %d - %d : ",i,arr2[i]);
    
    printf("\n");
}
void DeleteArr1(){
	for(i=0; i<n; i++)
		arr[i] = 0;
	
	printf("Elements of Array-1 have been Deleted!\n");
}
void DeleteArr2(){
	for(i=0; i<n; i++)
		arr2[i] = 0;
	
	printf("Elements of Array-2 have been Deleted!\n");
}
  
int  main() {  
	int c;
    while(1){
	    printf("\nArray Operations Menu:\n");
    	printf("-----------------------------------------\n");	
	    printf("\n1. Input New Array:\n");
	    printf("\n2. Copy Array1 to Array2:\n");
	    printf("\n3. Print Array-1 Elements:\n");
	    printf("\n4. Print Array-2 Elements:\n");
	    printf("\n5. Delete The Array-1 Elements:\n");
	    printf("\n6. Delete The Array-2 Elements:\n");
	    printf("\n7. Exit From The Program:\n");
        printf("\n\nEnter Your Choice: ");
	    scanf("%d",&c);
	    switch(c){
	    	case 1: arrIn(); break;
	    	case 2: CopyArr(); break;
	    	case 3: PrintArr1(); break;
	    	case 4: PrintArr2(); break;
	    	case 5: DeleteArr1(); break;
	    	case 6: DeleteArr2(); break;
	    	case 7: exit(0);
	    	default: printf("Wrong choice!!!\n"); break;
	    }
    } 
    return 0;	
}
