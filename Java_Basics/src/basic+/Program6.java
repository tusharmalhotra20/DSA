import java.util.* ;

public class Program6{
  public static void main(String args[]){

    Scanner sc = new Scanner(System.in) ;

    int a, b, c ;

    System.out.println("Tushar Malhotra\n42513202718\n");

    System.out.print("Enter first number:\t") ;
    a = sc.nextInt() ;
    System.out.print("Enter second number:\t") ;
    b = sc.nextInt() ;
    System.out.print("Enter third number:\t") ;
    c = sc.nextInt() ;

    if(a > b){
      if(a > c){
        System.out.println("First number is greater:\t" + a) ;
      }
      else
      System.out.println("Third number is greater:\t" + c) ;
    }
    if(b > a){
      if(b > c){
          System.out.println("Second number is greater:\t" + b) ;
      }
      else
        System.out.println("Third number is greater:\t" + c) ;
    }
  }
}
