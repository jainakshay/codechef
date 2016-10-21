import java.util.*;
import java.math.BigInteger;
class myclass
{
    public static void main( String args[])
    {
    Scanner s =new Scanner(System.in);
    int t,i;
    BigInteger b1,b2,b3,n;
    b1 = new BigInteger("9");
    b2 = new BigInteger("6");
    b3 = new BigInteger("3");
    t= s.nextInt();
    for(i=1;i<=t;i++)
    {
        System.out.print("Case #"+i+": ");
        n=s.nextBigInteger();
    if(n.mod(b1).equals(BigInteger.ZERO) &&n.mod(b2).equals(BigInteger.ZERO)&& n.mod(b3).equals(BigInteger.ZERO))
    System.out.println("yes");
    else
    System.out.println("no");
    }
    }
}