#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
lld rev(lld a)
{
    string s="";
    int i = 0;
    while(a > 0)
    {
        s += ((a%2)+'0');
        a = a/2;
        i++;
    }

    for(;i<32;i++)
        s += '0';

   // cout<<s<<endl;
    a = stoll(s , NULL , 2);

   // cout<<a<<endl;
    return a;
}
int main() {
    int t;
    scanf("%d" , &t);
    while(t--)
    {
        lld a , b;

        scanf("%lld %lld" , &a , &b);
        a = rev(a);
        b = rev(b);
        printf("%lld\n" , a+b);
    }
    return 0;
}
