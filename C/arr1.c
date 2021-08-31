#include <stdio.h>
	void main()
	{
    	int arr[50];
    	int i, max, min, size,sum=0;
	float avg=0;
      	printf("\n Enter size of the array:\n ");
  	  scanf("%d", &size);
     	 printf("\n Enter elements in the array:\n ");
  	  for(i=0; i<size; i++)
   	 {
     	   scanf("%d ", &arr[i]);
   	 }

   	 /* Assume first element as maximum and minimum */
   	 max = arr[0];
   	 min = arr[0];
   
   	  //Find maximum and minimum in all array elements.
     
   	 for(i=0; i<size; i++)
    	{
     	       	 if(arr[i] > max)
     	 	  {
            	max = arr[i];
       		 }
            	  if(arr[i] < min)
      	 	 {
           	 min = arr[i];
       		 }
	sum=sum+arr[i];
    	}

	avg=sum/size;
	 printf("\nMaximum element = %d\n", max);
    	printf("\n Minimum element = %d\n", min);
	printf("\n Sum =%d and Average = %f\n", sum, avg);
    
}
