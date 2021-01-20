#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int Msize = 1e5;
set<int> prime;
vector<bool> vis(Msize);
void P()
{
	prime.insert(2);
	for (ll i = 3; i < Msize; i += 2)
		if (vis[i] == 0)
		{
			prime.insert(i);
			for (ll j = i * i; j < Msize; j += i)
				vis[j] = 1;
		}
}

int main()
{
    init;
    P();
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin>>n;
        ll val = *prime.lower_bound(1+n);
        ll val2 = *prime.lower_bound(val+n); 
        cout<<val*val2<<'\n';
    }
}