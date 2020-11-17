#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

ll func(vector<vector<ll>> &dp, string &r, bool fl = 1, int ind = 0)
{

	if (ind >= r.length())
		return 1;

	if (dp[ind][fl] != 0)
		return dp[ind][fl];

	int end = 9;
	if (fl)
		end = r[ind] - '0';

	for (int i = !(ind % 2); i <= end; i += 2)
		dp[ind][fl] += func(dp, r, fl && (i == end), ind + 1);

	return dp[ind][fl];
}

ll func1(ll r)
{

	string tmp = to_string(r);
	ll ans = 0;
	for (ll i = 9; i < r; i = i * 10 + 9)
	{
		vector<vector<ll>> dp(20, vector<ll>(3));
		string tr = to_string(i);
		ans += func(dp, tr);
	}
	vector<vector<ll>> dp1(20, vector<ll>(3));
	ans += func(dp1, tmp);
	return ans;
}

int main()
{
	init;
	int t;
	cin >> t;

	for (int zz = 1; zz <= t; zz++)
	{
		ll l, r;
		cin >> l >> r;
		ll cnt = 0;
		ll ans = func1(r) - func1(l - 1);
		cout << "Case #" << zz << ": " << ans << '\n';
	}
}