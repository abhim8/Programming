/* 
    > In java, the selection statements are also known as decision making statements or branching statements.
        1. if statement
        2. if-else statement
        3. if-elif statement
        4. nested if statement
        5. switch statement
*/


class selectionControlStmnts {
    public static void main(String[] args) {
        
        // if
        Scanner read = new Scanner(System.in);
		System.out.print("Enter any number: ");
		int num = read.nextInt();		
        if((num % 5) == 0) {
		    System.out.println("We are inside the if-block!");
			System.out.println("Given number is divisible by 5!!");
		}
		System.out.println("We are outside the if-block!!!");


        // if-else
        Scanner read1 = new Scanner(System.in);
		System.out.print("Enter any number: ");
		int num1 = read1.nextInt();
		if((num1 % 2) == 0) {
			System.out.println("We are inside the true-block!");
			System.out.println("Given number is EVEN number!!");
		}else {
			System.out.println("We are inside the false-block!");
			System.out.println("Given number is ODD number!!");
		}
		System.out.println("We are outside the if-block!!!");

        
        
        // nestesd if
        Scanner read2 = new Scanner(System.in);
		System.out.print("Enter any number: ");
		int num2 = read2.nextInt();

		if (num2 < 100) {
			System.out.println("\nGiven number is below 100");
			if (num2 % 2 == 0){
				System.out.println("And it is EVEN");
            }else{
				System.out.println("And it is ODD");
            }
		}else{
			System.out.println("Given number is not below 100");
        }
		System.out.println("\nWe are outside the if-block!!!");



        // if-else-if
        int a, b, c;
		Scanner read3 = new Scanner(System.in);
		System.out.print("Enter any three numbers: ");
		a = read3.nextInt();
		b = read3.nextInt();
		c = read3.nextInt();

		if( a>=b && a>=c){
			System.out.println("\nThe largest number is " + a) ;
        } else if (b>=a && b>=c){
	    	System.out.println("\nThe largest number is " + b) ;
        }else{
	    	System.out.println("\nThe largest number is " + c) ;
        }
		System.out.println("\nWe are outside the if-block!!!");


        // switch
        Scanner read4 = new Scanner(System.in);
		System.out.print("Press any digit: ");
		int value = read4.nextInt();
		switch( value ){
		    case 0: System.out.println("ZERO") ; break ;
		   	case 1: System.out.println("ONE") ; break ;
		   	case 2: System.out.println("TWO") ; break ;
		   	case 3: System.out.println("THREE") ; break ;
		   	case 4: System.out.println("FOUR") ; break ;
		   	case 5: System.out.println("FIVE") ; break ;
		   	case 6: System.out.println("SIX") ; break ;
		   	case 7: System.out.println("SEVEN") ; break ;
		   	case 8: System.out.println("EIGHT") ; break ;
		   	case 9: System.out.println("NINE") ; break ;
		   	default: System.out.println("Not a Digit") ;
		}
       System.out.println("\nWe are outside the switch!!!");
    }
}

/* Author: Abhilash Movva */
