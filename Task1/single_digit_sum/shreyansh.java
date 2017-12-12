import java.util.*;
class shreyansh{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		if(n==0)
			System.out.println(0);
		else{
			n%=9;//number mod 9 gives sum of digits brought down to single digit
			if(n==0)
				n=9;
			System.out.println(n);
		}
	}
}