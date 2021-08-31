/*
    2.	Write a Java program to find MAX and MIN number from Array ?
    Ex: {1,2,3,4,5,6,7,8,9}

*/

package Assignments.A1;

import java.util.Scanner;

public class maxAndMinFromArray {
    public static void main(String[] args) {
        int n,max,min;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size of Array: ");
        n = input.nextInt();
        int arr[] = new int [n];
        System.out.print("Enter "+n+" Elements: ");
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        max = min = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }
        System.out.println("Maximum Element="+max+", Minimum Element="+min);
        input.close();
    }
}
