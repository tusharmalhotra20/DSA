package basic;

import java.util.* ;
import java.lang.* ;

public class Program_5 {
	
	static void Rectangle(float l, float b) {
		
		float rpr, rar ;
		
		rpr = 2 * (l + b) ;
		rar = l * b ;
		
		System.out.println("\nThe perimeter of rectangle is:\t" + rpr) ;
		System.out.println("\nThe area of rectangle is:\t" + rar) ;
	}
	
	static void Circle(float r) {
		
		float cpr, car ;
		
		cpr = (float) (2 * (3.141592) * r) ;
		car = (float) (2 * (3.141592) * r * r) ;
		
		System.out.println("\nThe perimeter of circle is:\t" + cpr) ;
		System.out.println("\nThe area of circle is:\t" + car) ;
	}
	
	static void Square(float s) {
		
		float spr, sar ;
		
		spr = 4 * s ;
		sar = s * s ;
		
		System.out.println("\nThe perimeter of square is:\t" + spr) ;
		System.out.println("\nThe area of square is:\t" + sar) ;
	}
	
	static void Triangle_ar(float th, float tb) {
		float tar ;
		 
		tar = (float) 0.5 * th * tb ;

		System.out.println("The area of triangle is:\t" + tar) ;
	}
	
	static void Triangle_pr(float s1, float s2, float s3) {
		float tpr ;
		
		tpr = s1 + s2 +s3 ;
		
		System.out.println("The perimeter of triangle is:\t" + tpr) ;
	}
	
	static void Parallelogram(float ph, float pb) {
		float ppr, par ;
		
		ppr = 2 * (ph + pb) ;
		par = ph * pb ;
		
		System.out.println("The perimeter of parallelogram is:\t" + ppr) ;
		System.out.println("The area of parallelogram is:\t" + par) ;
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in) ;
		
		float l, b ;
		
		float s ;
		
		float th, tb ;
		
		float r ;
		
		float pb, ph ;
		
		int ch ;
		
		System.out.print("Calculate Area and Perimeter for various shapes:\n") ;
		
		do{
			
			System.out.println("\nChoose your desired shape:") ;
			System.out.println("1. Rectangle") ;
			System.out.println("2. Square") ;
			System.out.println("3. Triangle") ;
			System.out.println("4. Circle") ;
			System.out.println("5. Parallelogram") ;
			System.out.println("6. Exit") ;
			System.out.println("Please enter your choice:\t") ;
			
			ch = sc.nextInt() ;
			
			switch(ch) {
				
			case 1: System.out.print("Enter Length of rectangle:\t");
					l = sc.nextFloat() ;
					System.out.print("Enter Breadth of rectangle:\t");
					b = sc.nextFloat(); 
				
					Rectangle(l, b) ;
			break ;
			
			case 2: System.out.println("Enter the side of square:\t") ;
					s = sc.nextFloat();
				
					Square(s) ;
			break ;
			
			case 3: System.out.println("Enter your choice: \na) Area \nb) Perimeter") ;
					char tch = sc.next().charAt(0) ;
					
					if (tch == 'a') {
						
						System.out.print("Enter the height of triangle:\t") ;
						th = sc.nextFloat();
						System.out.print("Enter the base of triangle:\t") ;
						tb = sc.nextFloat();
						
						Triangle_ar(th, tb) ;
					}
					
					else if(tch == 'b') {
						System.out.println("Enter sides of triangle:\t") ;
						float s1 = sc.nextFloat();
						float s2 = sc.nextFloat() ;
						float s3 = sc.nextFloat() ;
						
						Triangle_pr(s1, s2, s3) ;
					}
					
			break ;
			
			case 4: System.out.print("Enter radius for circle:\t") ;
					r = sc.nextFloat() ;
					
					Circle(r) ;
			break ;
			
			case 5: System.out.println("Enter the vertical height of parallelogram:\t") ;
					ph = sc.nextFloat();
					System.out.println("Enter the base of parallelogram") ;
					pb = sc.nextFloat() ;
					Parallelogram(ph, pb) ;
			break ;
			
			case 6: System.exit(1) ;
			break ;	
			
			default: System.out.println("Wrong Choice!") ;
			
			}
		}while(ch!= 6) ;	
	}
}
