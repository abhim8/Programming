//Experiment-1 => b) SJF
//Shortest Job First CPU Scheduling Algoritm


#include<stdio.h>
int main(){
    int p[20], bt[20], wt[20], tat[20], i, k, n, temp;
    float wtavg, tatavg;
    printf("\nEnter the number of processes: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        p[i]=i;
        printf("Enter Burst Time for Process %d: ", i);
        scanf("%d", &bt[i]);
    }

    for(i=0;i<n;i++){
        for(k=i+1;k<n;k++){
            if(bt[i]>bt[k]){
                // swapping burstTimes
                temp=bt[i];
                bt[i]=bt[k];
                bt[k]=temp;

                // swapping Process
                temp=p[i];
                p[i]=p[k];
                p[k]=temp;
            }
        }
    }

    wt[0] = wtavg = 0;
    tat[0] = tatavg = bt[0];
    for(i=1;i<n;i++){
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = tat[i-1] + bt[i];
        wtavg = wtavg + wt[i];
        tatavg = tatavg + tat[i];
    }
    
    printf("\nPROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME\n");
    
    for(i=0;i<n;i++)
        printf("P%d \t\t %d \t\t %d \t\t %d\n", p[i], bt[i], wt[i], tat[i]); 
    
    printf("\nAverage Waiting Time: %f", wtavg); 
    printf("\nAverage Turnaround Time: %f\n", tatavg);
    
    return(0);
}