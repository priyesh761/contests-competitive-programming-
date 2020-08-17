// Facebook hackercup round1 2020
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod (ll)(1e9 + 7)
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
	init;
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;

	for (int ttt = 1; ttt <= t; ttt++)
	{
		ll n, k, w;
		cin >> n >> k >> w;

		vector<ll> l(n);
		vector<ll> h(n);
		for (int i = 0; i < k; i++)
		{
			cin >> l[i];
			l[i] %= mod;
		}

		ll al, bl, cl, dl;
		cin >> al >> bl >> cl >> dl;

		for (int i = k; i < n; i++)
		{
			l[i] = 1LL + (al * l[i - 2] + bl * l[i - 1] + cl) % dl;
			l[i] %= mod;
		}
		for (int i = 0; i < k; i++)
		{
			cin >> h[i];
			h[i] %= mod;
		}

		ll ah, bh, ch, dh;
		cin >> ah >> bh >> ch >> dh;

		for (int i = k; i < n; i++)
		{
			h[i] = 1LL + (ah * h[i - 2] + bh * h[i - 1] + ch) % dh;
			h[i] %= mod;
		}
		vector<ll> p(n);
		ll lft = INT_MAX, rht = 0, hmax = 0, add = 0, prev = 0;

		deque<tuple<int, int, int>> qu;
		for (int i = 0; i < n; i++)
		{
			while (!qu.empty() && get<1>(qu.front()) < l[i])
				qu.pop_front();

			if (qu.empty())
			{
				// cout << i << endl;
				qu.clear();
				qu.push_back({0, l[i] - w, i});
				hmax = 0;
				prev = (i == 0) ? 0 : p[i - 1];
				lft = l[i];
			}
			else
			{
				tie(hmax, lft, prev) = qu.front();
			}
			rht = l[i] + w;
			if (hmax < h[i])
				p[i] += ((h[i] - hmax) * 2) % mod;

			p[i] += (prev + 2 * (rht - (lft))) % mod;
			p[i] %= mod;
			while (!qu.empty() && get<0>(qu.back()) <= h[i])
				qu.pop_back();
			qu.push_back({h[i], l[i] + w, p[i]});
		}


		ll ans = 1;
		for (int i = 0; i < n; i++)
		{
			ans *= (p[i]) % mod;
			ans %= mod;
		}
		cout << "Case #" << ttt << ": " << ans << '\n';
	}
}