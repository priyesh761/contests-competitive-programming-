#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);

typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x,y) memset(x,y,sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair






int main()
{
	init;

	ll n, x;
	cin >> n >> x;
	ll ar[n + 1];
	ar[0] = 0;
	for (ll i = 0; i < n; ++i)
	{
		cin >> ar[i];
	}
	ll tmp[2 * n + 1];
	ll tmp1[2 * n + 1];
	tmp[0] = tmp1[0] = 0;


	for (ll i = 1; i <= 2 * n; i++) {
		tmp[i] = tmp[i - 1] + ar[(i - 1) % n];
		tmp1[i] = tmp1[i - 1] + (ar[(i - 1) % n] * (ar[(i - 1) % n] + 1)) / 2;
		//cout << tmp[i] << ' ' << tmp1[i];

		//cout << endl;
	}
	ll maxi = 0;

	for (ll i = 2 * n; i > n; i--)
	{
		ll low = 1;
		ll high = i;

		while (low < high)
		{
			ll mid = low + (high - low) / 2;

			if (tmp[i] - tmp[mid] > x)
				low = mid + 1;
			else
				high = mid;
		}
		ll ans = tmp1[i] - tmp1[high];;
		ll rem = x - (tmp[i] - tmp[high]);
		if (rem) {
			ll ad = tmp[high] - tmp[high - 1];
			ad = ((ad - rem) * (ad - rem + 1)) / 2;
			ans += tmp1[high] - tmp1[high - 1] - ad;

		}
		maxi = max(maxi, ans);
		//	cout << ans << endl;


	}
	cout << maxi << '\n';



}