// Java program to find large factorials using BigInteger
import java.math.BigInteger;
import java.util.Scanner;

class a
{
    // Returns Factorial of N
    static BigInteger factorial(int N)
    {
        // Initialize result
        BigInteger f = new BigInteger("1"); // Or BigInteger.ONE

        // Multiply f with 2, 3, ...N
        for (int i = 2; i <= N; i++)
            f = f.multiply(BigInteger.valueOf(i));

        return f;
    }

    // Driver method
    public static void main(String args[]) throws Exception
    {
        int N = 20;
        Scanner sc = new Scanner(System.in);
        int tc;
        tc = sc.nextInt();
     	for(int i=0;i<tc;i++)
     	{
               BigInteger now = new BigInteger(sc.next());
               BigInteger ans = new BigInteger(sc.next());
               BigInteger one = new BigInteger("1");
               BigInteger two = new BigInteger("2");
               BigInteger a = now.multiply(ans.add().divide(two));
               BigInteger b = ans.multiply(now.add(one).divide(two));

     		if(a.compareTo(b) > 0) now = a;
               else now = b;

               System.out.println(now.toString());
     	}







    }
}
