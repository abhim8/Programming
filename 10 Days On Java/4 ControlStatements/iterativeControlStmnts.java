/* 
    > The java programming language provides a set of iterative statements that are used to execute a statement or a block of statements repeatedly as long as the given condition is true. 
      The iterative statements are also known as looping statements or repetitive statements.
            1. while statement
            2. do-while statement
            3. for statement
            4. for-each statement
*/

class iterativeControlStmnts {
    public static void main(String[] args) {
		
        // while
        int num = 1;
		while(num <= 10) {
			System.out.println(num);
			num++;
		}
		System.out.println("Statement after while!");


        // do-while
        int num1 = 1;
		do {
			System.out.println(num1);
			num1++;
		}while(num1 <= 10);
		System.out.println("Statement after do-while!");


        // for
        for(int i = 0; i < 10; i++) {
			System.out.println("i = " + i);
		}
		System.out.println("Statement after for!");

        // for-each
        int[] arrayList = {10, 20, 30, 40, 50};
		for(int i : arrayList) {
			System.out.println("i = " + i);
		}
		System.out.println("Statement after for-each!");
    }    
}
/* Author: Abhilash Movva */