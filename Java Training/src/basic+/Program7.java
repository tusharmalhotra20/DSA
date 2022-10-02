import java.lang.*;

public class Program7{
  public static void main(String args[]){

    int i ;
    double a, b, c, x1, x2, D ;

    System.out.println("Tushar Malhotra\n42513202718\n");
    
    if(args.length > 0){
      System.out.println("The value of a, b and c are:\t") ;
      for(i=0; i<args.length; i++){
        System.out.println(args[i]) ;
      }

      a = Double.parseDouble(args[0]) ;
      b = Double.parseDouble(args[1]) ;
      c = Double.parseDouble(args[2]) ;

      D = (b*b) - (4*a*c) ;

      if(D > 0){

        x1 = (-b + Math.sqrt(D)) / (2*a) ;
        x2 = (-b - Math.sqrt(D)) / (2*a) ;

        System.out.println("The roots are real and distinct:\t" + x1 + " and " + x2) ;
      }
      else if(D == 0){

        x1 = (-b  / (2*a)) ;
        x2 = (-b  / (2*a)) ;

        System.out.println("The roots are real and same:\t" + x1 + " and " + x2) ;
      }
      else if(D < 0){

        System.out.println("The roots are imaginary, no real roots:") ;
      }
    }
  }
}
