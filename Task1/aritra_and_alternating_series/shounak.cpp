#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--)
    {
        ll n;
        cin >> n;
        cout << n/2 - (n%2)*n << endl;
    }
    return 0;
}
