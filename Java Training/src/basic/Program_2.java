package basic;

import java.util.* ;	//A class to take input from user.

public class Program_2 {
	
	public static void main(String[] args) {
		//TODO: Compute Sum, Difference, Multiplication and division between two numbers.

		int a, b ;
		float c ;
		
		Scanner sc = new Scanner(System.in) ;	//An object 'sc' is created to take user input.
		
		System.out.print("Enter First number:\t") ;
		a = sc.nextInt() ;
		
		System.out.print("Enter Second number:\t") ;
		b = sc.nextInt();
		
		System.out.println();
		
		c = a + b ;
		System.out.println("Sum of two numbers:\t" + c);
		
		c = a - b ;
		System.out.println("Difference of two numbers:\t" + c);
		
		c = a * b ;
		System.out.println("Multiplication of two numbers:\t" + c);
		
		c = (float)a / (float)b ;
		System.out.println("Division of two numbers:\t" + c);
		
	}

}
