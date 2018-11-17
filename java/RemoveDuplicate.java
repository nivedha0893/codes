public class RemoveDuplicate
{
	public static void main(String[] args)
	{
		String str="aaaaaefgghd";
		String s="";
		for(int i=0;i<str.length();i++)
		{
			Boolean found=false;
			for(int j=0;j<s.length();j++)
			{
				if(str.charAt(i)==s.charAt(j))
				{
				    found=true;
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