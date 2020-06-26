#include<bits/stdc++.h>
using namespace std;

using ll = unsigned long long;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);

typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x,y) memset(x,y,sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair
ll x, y, l, r;
//vector<vector<bool>> dp(64, vector<bool>((ll)1e12));
ll func(ll x, ll y, ll z)
{
	return (x & z) * (y & z);
}

bool cp(pair<ll, ll>a, pair<ll, ll>b)
{
	if (a.F == b.F)
		return a.S < b.S;

	return a.F > b.F;
}
pair<ll, ll> comp(vi& index, int ind )
{

	pair<ll, ll> ans(0, 0);
	if (ind  < 0)
		return ans;

	comp(index, ind - 1);
	return ans;
}


int main()
{
	init;

	int t;
	cin >> t;
	while (t--)
	{

		cin >> x >> y >> l >> r;
		if (x < y)
			swap(x, y);

		ll max = 0;
		for (int i = 0; i < 64; i++)
			if (x & (1LL << i))
				max = i;
		max = (1LL << (max + 1)) - 1;



		//	cout << max << ' ' << l << ' ' << r << endl;
		ll maxR = 0;
		for (int i = 0; i < 64; i++)
			if (r & (1LL << i))
				maxR = i;
		ll maxRR = (1LL << (maxR)) - 1;



		ll ans = x | y;
		vi index;
		for (int i = 0; i < 64; i++)
			if (ans & (1LL << i))
				index.PB(i);

		ans = comp(index, index.size() - 1).S;



		if (y == 0)
			ans = 0;
		cout << ans << '\n';

	}
}