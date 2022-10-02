public class Program10{
	public static void main(String[] args){

	System.out.println("Tushar Malhotra\n42513202718\n");

  if (args.length > 0){

    String str = args[0] ;
    int i=0, j = str.length()-1 ;
    int flag = 1 ;

    while(i < j){
      if (str.charAt(i) != str.charAt(j)){
        System.out.println("No, string is not pallindrome");
        flag = 0 ;
        break;
      }
      i++ ;
      j-- ;
    }
    if(flag == 1)
      System.out.println("Yes, string is pallindrome");
  }
	else
		System.out.println("No command line "	+ "arguments found.") ;
	}
}
