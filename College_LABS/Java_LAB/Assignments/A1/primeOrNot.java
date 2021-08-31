// 5.	Write a Java program to find the given number is prime number or not?

package Assignments.A1;

import java.util.Scanner;

public class primeOrNot {
    public static void main(String[] args) {
        int n, res=0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a Number: ");
        n = input.nextInt();
        if(n<0) System.exit(0);
        for(int i=2; i<n; i++){ if(n%i==0) {res++; break;}}
        if(res == 0)
            System.out.println("Given num "+ n +" is a prime");
        else
            System.out.println("Given num "+ n +" is not a prime");
        input.close();
    }
}
