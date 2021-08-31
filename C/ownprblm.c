#include<stdio.h>
#include<math.h>
#include<stdlib.h>


struct pizza_type
{
    char pizza_name[25];
    int prize;
};

struct pizza_type pizza_details[8] = {"Double cheese margherita",295,
                                     "Roman veg supreme",340,
                                     "Spicy triple tango",295,
                                     "Pepper panner",395,
                                     "5 Pepper",395,
                                     "Veggie paradise",350,
                                     "Cloud 9",455,
                                     "Milan veg fantasy",370 };

 int main()
 {
     //printf("Enter range :\n");

     int i=0,j=0,k=0;
     int j_range = 7;
     int j_initialvalue = 1;
     int k_range = 8;
     int k_initialvalue = 2;
     for ( i = 0; i < 6; i++)
     {
      //printf("i loop= %d\n",i+1);  
        for ( j = j_initialvalue; j < j_range; j++)
        {

      //printf("j loop= %d\n",j+1);  

            for ( k = k_initialvalue ; k < k_range ; k++)
                {
                        int Total_cost;
                        Total_cost = pizza_details[i].prize + pizza_details[j].prize + pizza_details[k].prize;
                             // printf("k loop= %d\n",k+1);  
                            if ( (Total_cost > 1150) && (Total_cost< 1200) )
                            {
                                 printf("\n%s, %s, %s, \n Pizza1_cost=  %d, Pizza2_cost = %d, Pizza3_cost = %d totalcost =%d\n",
                                          pizza_details[i].pizza_name, pizza_details[j].pizza_name, pizza_details[k].pizza_name,
                                            pizza_details[i].prize, pizza_details[j].prize, pizza_details[k].prize,Total_cost);
                            }
                            
                       // printf("i=%d, j=%d k=%d\n",i+1,j+1,k+1);
                      //  printf("Pizza= %s, Pizza2= %s Pizza3= %s\n", pizza_details[0].pizza_name, pizza_details[j].pizza_name, pizza_details[k].pizza_name);
                       // printf("Pizza1 %s, Pizza2 %s, Pizza3 %s, Pizza1_cost=  %d, Pizza2_cost = %d, Pizza3_cost = %d",
                         //       pizza_details[i].pizza_name, pizza_details[j].pizza_name, pizza_details[k].pizza_name,
                           //     pizza_details[i].prize, pizza_details[j].prize, pizza_details[k].prize);
                }   
                //printf("\n\n");
                ++k_initialvalue;
        }
        
        ++j_initialvalue;
        k_initialvalue = j_initialvalue +1 ;
        k_range=8;

       //printf("\n\n");
     }

     return 0;
 }