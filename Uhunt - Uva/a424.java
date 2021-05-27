// Java program to find large factorials using BigInteger
import java.math.BigInteger;
import java.util.Scanner;

class a424
{

    public static void main(String args[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        BigInteger sum = new BigInteger("0");
        while (sc.hasNext()){
             BigInteger a = new BigInteger(sc.nextLine());
             if (a.compareTo(BigInteger.ZERO) == 0) break;
             sum = sum.add(a);
        }
        System.out.println(sum.toString());
    }
}
