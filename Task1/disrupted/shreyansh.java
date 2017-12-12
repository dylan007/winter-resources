import java.io.*;
import java.util.*;
class shreyansh{
	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0){
			String s[]=br.readLine().split(" ");
			long ans=getValue(Long.parseLong(s[0]));
			ans+=getValue(Long.parseLong(s[1]));
			System.out.println(ans);
		}
	}
	//take care to add l after long values
	//otherwise they will be considered as int by default
	static long getValue(long n){
		long ans=0;
		long mult=2147483648l;
		while(n>0){
			ans+=mult*(n&1l);
			n>>=1l;//shifting n by 1 bit to right
			mult>>=1l;//dividing multiplier by 2
		}
		return ans;
	}
}