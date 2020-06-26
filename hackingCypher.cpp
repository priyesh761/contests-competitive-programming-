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

ll power(ll a, ll b)	//a is base, b is exponent
{
	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	if (b % 2 == 1)
		return (power(a, b - 1) * a) % mod;
	ll q = power(a, b / 2);
	return (q * q) % mod;
}




int main()
{
	init;

	string s;
	cin >> s;

	int x, y;
	cin >> x >> y;

	vi pf(s.length());
	vi sf(s.length());

	ll ans = 0;
	for (int i = 0; i < s.length(); i++)
	{
		pf[i] = ((ans * 10) % x + (ll)(s[i] - '0') % x) % x;
		ans = pf[i];
		//cout << pf[i] << ' ';
	}
	//cout << endl;

	ans = 0;
	ll pw = 1;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		sf[i] = (ans  + ((s[i] - '0') % y) * (pw % y)) % y;
		ans = sf[ i];
		pw = ((pw % y) * (10 % y)) % y;
		//cout << sf[i] << ' ';
	}
	//cout << endl;
	for (int i = 0; i < s.length() - 1; i++)
	{
		//cout << pf[i] << ' ' << sf[ i + 1] << endl;

		if (s[i + 1] != '0' && pf[i] == 0 && sf[ i + 1]  == 0)
		{
			cout << "YES\n";
			cout << s.substr(0, i + 1) << '\n' << s.substr(i + 1);
			return 0;
		}
	}

	cout << "NO";


}