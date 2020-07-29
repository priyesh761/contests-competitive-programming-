//TCS mockvita 2  - 2020

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int bitc(ll n)
{
	ll mx = 0, mi = 9;
	while (n > 0)
	{
		mx = max(mx, n % 10);
		mi = min(mi, n % 10);
		n /= 10;
	}
	int tmp = (mx * 11 + mi * 7) % 100;

	return tmp / 10;
}
int main()
{
	init;
	ll n;
	cin >> n;

	int ev[10], od[10];
	int total[10];
	fill(ev, ev + 10, 0);
	fill(od, od + 10, 0);
	fill(total, total + 10, 2);


	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		int tmp = 0;
		tmp = bitc(x);

		if (i % 2 == 1)
			od[tmp]++;
		else
			ev[tmp]++;
	}

	ll cnt = 0;
	for (int i = 0; i < 10; i++) {
		if (ev[i] > 2 && total[i] > 0) {
			cnt += 2;
			total[i] -= 2;
		}
		else if (ev[i] == 2 && total[i] > 0) {
			cnt++;
			total[i] -= 1;
		}

	}
	for (int i = 0; i < 10; i++) {
		if (od[i] > 2 && total[i] > 0)
			cnt += total[i], total[i] = 0;
		else if (od[i] == 2 && total[i] > 0)
			cnt++, total[i]--;
	}
	cout << cnt << endl;
}