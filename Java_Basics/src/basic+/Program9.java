public class Program9{
 public static void main(String args[]){

  int i, j ;
  int[] n ; //declaring array
  n = new int[20] ; // allocating memory to array
  System.out.println("Tushar Malhotra\n42513202718\n");

  if(args.length > 0)
  {
    for(j=0; j<args.length; j++)
      n[j] = Integer.parseInt(args[j]) ;

    for(i=0; i<n.length; i++){
      boolean isPrime = true;
        for (j=2; j<i; j++)
        {
              if(i%j==0)
              {
                  isPrime = false;
                  break;
              }
          }
      if(isPrime)
          System.out.println(i + " are the prime numbers in the array ");
   }
  }
  else
    System.out.println("Arguments not found") ;
}
}



// for(j=0, i=2; j<n.length; j++)
// {
//   if(n[j]%i !=0)
//     System.out.println(n[j]+" is not prime number");
//   else
//     System.out.println(n[j]+" is prime number");
// }
// }
