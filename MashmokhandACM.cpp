#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,a,b) for (int i = a; i < b; i++)
#define rFor(i,a,b) for (int i = a; i > b; i--)

typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair






int main()
{
	init;

	int n, k;
	cin >> n >> k;

	ll dp[k][n + 1];
	memset(dp, 0, sizeof(dp));

	For(i, 1, n + 1)
	dp[0][i] = 1;

	For(i, 1, k)
	For(j, 1, n + 1)
	{
		dp[i][j] = (dp[i][j] + dp[i - 1][j] % mod);

		for (int k = j + j; k <= n; k += j)
			dp[i][k] = (dp[i][k] + dp[i - 1][j] );

		/*		cout << dp[i][j] << ' ';
				if (j == n)
					cout << '\n';
		*/
	}

	ll sum = 0;
	For(i, 1, n + 1)
	sum = (sum + dp[k - 1][i]) ;

	cout << sum % mod ;
}