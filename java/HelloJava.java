public class HelloJava
{
	public static void main(String[] args)
	{
		String str="aaaaaefgghd";
		int len=str.length();
		String s="";
		for(int i=0;i<len;i++)
		{
			Boolean found=false;
			for(int j=0;j<s.length;j++)
			{
				if(str.charAt(i)==s.charAt(i))
				{
					boolean found=true;
					break;
				}
			}
			if(found==false)
			{
				s=s.concat(String.valueOf(str.charAt(i)));
			}	
		}
		System.out.println(s);


	}
}  