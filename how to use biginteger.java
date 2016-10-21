import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		BigInteger b,k;
		int i,t;
		t=s.nextInt();
		for(i=0;i<t;i=i+1)
		{
		    b=s.nextBigInteger();
		    k=s.nextBigInteger();
		    if(b.mod(k).equals(BigInteger.ZERO))
		    System.out.println("YES");
		    else
		    System.out.println("NO");
		}
	}
}
