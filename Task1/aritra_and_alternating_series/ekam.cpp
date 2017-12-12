#include<bits/stdc++.h>
typedef long long int lld;
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        lld n;
        scanf("%lld" , &n);

        if(!(n%2))
            printf("%lld\n" , n/2);
        else
        {
            lld temp = (n-1)/2 -n;
            printf("%lld\n" , temp);
        }
    }
    return 0;
}
