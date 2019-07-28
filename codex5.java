public class codex5
{
	public static void main(String[] args) 
	{
		long ans=1;
		long i;
		for(i=1;i<=20;i++)
			{
				ans=lcm(i,ans);
			}
		System.out.println(ans);
	}

	static long lcm(long x,long y)
	{
		long temp1=x;
		long temp2=y;
		long gcd=0;
		while(x!=y)
		{
			if(x>y)
				x-=y;
			else
				y-=x;
		}
		gcd=x;
		return (temp1*temp2)/gcd;
		

	}



}