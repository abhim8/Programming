//Experiment-1 => a) FCFS
//First Come First Service CPU Scheduling Algoritm


#include<stdio.h>

int main() {
    int burstTime[20], waitTime[20], turnAroundTime[20], i, n;
    float wtavg, tatavg;
    
    printf("\nEnter the number of processes: "); scanf("%d", &n);
    
    for(i=0;i<n;i++){
        printf("\nEnter Burst Time for Process %d: ", i); scanf("%d", &burstTime[i]);
    }
    
    waitTime[0] = wtavg = 0;
    turnAroundTime[0] = tatavg = burstTime[0];
    
    for(i=1; i<n; i++){
        waitTime[i] = waitTime[i-1] + burstTime[i-1];
        turnAroundTime[i] = turnAroundTime[i-1] + burstTime[i];
        wtavg += waitTime[i];
        tatavg += turnAroundTime[i];
    }

    printf("\nPROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME\n");
    for(i=0; i<n; i++)
        printf("P%d \t\t %d \t\t %d \t\t %d\n", i, burstTime[i], waitTime[i], turnAroundTime[i]);
    
    printf("\nAverage Waiting Time: %f", wtavg/n); 
    printf("\nAverageTurnaround Time: %f\n", tatavg/n);

    return 0;
}