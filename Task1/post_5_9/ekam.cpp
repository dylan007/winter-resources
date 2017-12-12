#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
        string s;
        cin>>s;

        int n = s.length();
        int a[n];
        for(int i=0;i<n;i++) a[i] = s[i]-'0';

        int i=0,j=1;
        int m1 = 0 , m2 = 0;

        for(int k=0 ; k<n ; k++)
        {
            if(a[k] != i) m1++;
            if(a[k] != j) m2++;

            i^= 1 ; j^= 1;
        }

        printf("%d\n" , min(m1, m2));
    }
    return 0;
}
