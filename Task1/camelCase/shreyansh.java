import java.io.*;
import java.util.*;
class shreyansh{
	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s=" "+br.readLine();
		int l=s.length();
		StringBuilder sb=new StringBuilder(l);
		for(int i=1;i<l;i++){
			char ch=s.charAt(i);
			if(Character.isLetter(ch)){
				if(s.charAt(i-1)=='_')
					sb.append(Character.toUpperCase(ch));
				else
					sb.append(Character.toLowerCase(ch));
			}
		}
		System.out.println(sb);
	}
}