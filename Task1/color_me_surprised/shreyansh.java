import java.util.*;
class shreyansh{
	static int a[][],n,orig,w;
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int q=sc.nextInt();
		while(q-->0){
			n=sc.nextInt();
			int r=sc.nextInt();//i
			int c=sc.nextInt();//j
			w=sc.nextInt();
			a=new int[n][n];
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					a[i][j]=sc.nextInt();
			orig=a[r][c];
			if(w==orig)
				printMatrix();
			else{
				modify(r,c);
				printMatrix();
			}
		}
	}
	static void modify(int i,int j){
		if(i<0 || i>=n || j<0 || j>=n || a[i][j]!=orig)
			return;
		a[i][j]=w;
		modify(i+1,j);
		modify(i,j+1);
		modify(i-1,j);
		modify(i,j-1);
		modify(i+1,j+1);
		modify(i+1,j-1);
		modify(i-1,j+1);
		modify(i-1,j-1);
	}
	static void printMatrix(){
		for(int[] i :a){
			for(int j:i)
				System.out.print(j+" ");
			System.out.println();
		}
	}
}