/* 
    > The java programming language supports jump statements that used to transfer execution control from one line to another line.
        1. break statement
        2. continue statement
        3. labelled break and continue statements
        4. return statement
*/

import java.util.Scanner;
class jumpStatements {

    // return 
    static int example(){
        int c = 3+7;
        return c;
    }
    public static void main(String[] args) {
        
        
        // break
        int list[] = {10, 20, 30, 40, 50};
		for(int i : list) {
			if(i == 30)
				break;
			System.out.println(i);
		}


        // continue
        int list1[] = {10, 20, 30, 40, 50};
		for(int i : list1) {
			if(i == 30)
				continue;
			System.out.println(i);
		}

        // labelled break and continue statements
        Scanner read = new Scanner(System.in);
		reading: for (int i = 1; i <= 3; i++) {
			System.out.print("Enter a even number: ");
			int value = read.nextInt();

			verify: if (value % 2 == 0) {
				System.out.println("\nYou won!!!");
				System.out.println("Your score is " + i*10 + " out of 30.");
				break reading;
			}else {
				System.out.println("\nSorry try again!!!");
				System.out.println("You let with " + (3-i) + " more options...");				
				continue reading;
			}
		}

        // return
        int result = example();
        System.out.println(result);
    }    
    
    
}
/* Author: Abhilash Movva */
