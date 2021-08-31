// 4.	Write a Java program to find the given number is palindrome or not?

package Assignments.A1;

import java.util.Scanner;

public class palindromeOrNot {
    public static void main(String[] args) {
        int n, remainder, reversedInteger=0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a Number: ");
        n = input.nextInt();
        if(n<0) System.exit(0);
        int originalnumber = n;
        while( n != 0 ){
            remainder = n % 10;
            reversedInteger = reversedInteger * 10 + remainder;
            n /= 10;
        }
        if(reversedInteger == originalnumber)
            System.out.println("Given number "+ originalnumber +" is a Palindrome");
        else
            System.out.println("Given number "+ originalnumber +" is not a Palindrome");
        input.close();
    }
}
