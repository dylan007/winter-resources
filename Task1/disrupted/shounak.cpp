/*=======================
Author    : Shounak Dey
Filename  : disrupted.cpp
=======================	*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
	int T;
	cin >> T;
	while(T--){
		ull a,b;
		cin >> a >> b;
		vector<ull> x,y;
		
		for(int i=0;i<32;i++)
		{
			x.push_back(a%2);
			a /= 2;
		}
		for(int i=0;i<32;i++)
		{
			y.push_back(b%2);
			b /= 2;
		}
		
		ull p1=0,p2=0;
		
		for(auto it: x)
			p1 = 2*p1 + it;
		for(auto it: y)
			p2 = 2*p2 + it;

		cout << p1 + p2 << endl;
	}
	return 0;
}