/*=======================
Author    : Shounak Dey
Filename  : post_5_9.cpp
=======================	*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		string s;
		cin >> s;
		int c1=0,c2=0;
		for(int i=0;i<s.length();i++)
		{
			c1 += (i%2)!=(s[i]-'0');
			c2 += (!(i%2))!=(s[i]-'0');
		}
		cout << min(c1,c2) << endl;
	}
	return 0;
}