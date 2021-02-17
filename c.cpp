//Codevita round 2

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int main()
{
	init;
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<long long> dp(n + 2);
		dp[0] = 1;

		for (int i = 1; i <= n + 1; i++)
		{
			if (i - 1 >= 0)
				dp[i] += dp[i - 1];
			if (i - 2 >= 0)
				dp[i] += dp[i - 2];
			if (i - 3 >= 0)
				dp[i] += dp[i - 3];
		}
		cout << dp[n + 1] << '\n';
	}
}