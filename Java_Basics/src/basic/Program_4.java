package basic;

import java.util.* ;

public class Program_4 {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int n ;
		
		System.out.print("Enter any number:\t");
		n = sc.nextInt();
		
		int result = n * n * n;
		
		System.out.println("The cube of " + n + " is:\t" + result) ;
	}

}
