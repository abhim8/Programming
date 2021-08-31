// 3.	Write a Java program to find the given number is positive or negative or Zero?

package Assignments.A1;

import java.util.Scanner;

public class posOrNegOrZero {
    public static void main(String[] args) {
        int n;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a Number: ");
        n = input.nextInt();
        if(n>0)
            System.out.println("Given num "+ n +" is Positive(+ve)");
        else if(n<0)
            System.out.println("Given num "+ n +" is Negative(-ve)");
        else
            System.out.println("Given num "+ n +" is Zero");
        input.close();
    }
}
