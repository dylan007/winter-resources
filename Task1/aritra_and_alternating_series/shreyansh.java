import java.io.*;
class shreyansh{
	public static void main(String[] args)throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0){
			long n=Long.parseLong(br.readLine());
			long ans=(n+1)/2;//notice the trend in the answers
			if((n&1)==1)//if n is odd ans is negative
				ans*=-1;
			System.out.println(ans);
		}
	}
}