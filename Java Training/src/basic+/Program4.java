public class Program4{
public static void main(String[] args) {

		int sum = 0, i;

		System.out.println("Tushar Malhotra\n42513202718\n");
		
		System.out.println("Calculates Sum for below Integers");
		for(i=0; i<args.length; i++){
			System.out.println(args[i]);
			sum = sum + Integer.parseInt(args[i]);
	   }
	    System.out.println("Sum :" + sum);
  }
}
