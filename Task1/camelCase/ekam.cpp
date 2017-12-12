#include<bits/stdc++.h>
typedef long long int lld;
using namespace std;
int main()
{
    string s;
    cin>>s;

    int n = s.length();

    string out = "";
    for(int i=0; i< n-1 ; i++)
    {
        if(i == 0)
            out += tolower(s[i]);
        else if(s[i] == '_' && s[i+1] == '_')
            continue;
        else if(s[i] == '_')
        {
            out += toupper(s[i+1]);
            i++;
        }
        else
            out += tolower(s[i]);
    }

    out += tolower(s[n-1]);
    cout<<out<<endl;

    return 0;
}
