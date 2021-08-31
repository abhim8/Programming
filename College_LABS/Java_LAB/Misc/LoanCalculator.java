package Misc;

import java.util.Scanner;

public class LoanCalculator{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int amount = scanner.nextInt();
		//your code goes here
		int i=0;
		double ra=amount,t;
		while(true){
			t = ra * 0.1;
			ra = ra - t;
			i++;
			if(i==3)
				break;
		}
		System.out.println((int) ra);
		scanner.close();
	}
}