/*
    1.	Write a Java program to find sum of Array elements and average?
    Ex: {1,2,3,4,5,6,7,8,9}

*/

package Assignments.A1;

import java.util.Scanner;

public class sumOfArray {
    public static void main(String[] args) {
        int n,sum=0;
        float avg=0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size of Array: ");
        n = input.nextInt();
        int arr[] = new int [n];
        System.out.print("Enter "+n+" Elements: ");
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
            sum += arr[i];
        }
        avg = sum/n;
        System.out.println("Sum="+sum+", Average="+avg);
        input.close();
    }
}
