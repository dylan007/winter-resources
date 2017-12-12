import java.io.*;
class shreyansh{
	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0){
			String s=br.readLine();
			int l=s.length();
			int c1=0,c2=0;
			/*
			c1 and c2 keep track of the number of changes needed
			to make to obtain one of the 2 possible series
			starting from 1 and starting from 0
			*/
			for(int i=0;i<l;i++){
				int ch=s.charAt(i)-48;//48 is ascii val of 0
				if(ch!=(i&1))//getting the last bit of i
					c1++;
				else
					c2++;
			}
			System.out.println(Math.min(c1,c2));//printing the min cost
		}
	}
}