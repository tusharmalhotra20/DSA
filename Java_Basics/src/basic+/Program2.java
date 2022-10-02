public class Program2{
  public static void main(String args[]){

    int i = 0;

    System.out.println("Tushar Malhotra\n42513202718\n");
    
    if(args.length > 0){
      for(i=0; i < args.length ; i++){
        System.out.println(args[i]) ;
      }
    }
    else
      System.out.println("No arguments found") ;
  }
}
