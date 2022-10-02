public class Program5{
  public static void main(String args[]){

    int a , b = 1;

    System.out.println("Tushar Malhotra\n42513202718\n");
    
    int n = Integer.parseInt(args[0]);
    for(a = 1; a<= n ; a++){
      b = b*a;
    }
    System.out.println("factorial is:\t" +b);
  }
}
