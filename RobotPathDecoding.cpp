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

	int t;
	cin >> t;

	for (int k = 1; k <= t; k++)
	{
		string s;
		cin >> s;

		ll ver = 0;
		ll hor = 0;

		int i = 0;
		stack<pair<ll, ll>> st;
		stack<ll> nt;
		while (i < s.length())
		{
			if (s[i] == 'S')
				ver++;
			if (s[i] == 'N')
				ver--;
			if (s[i] == 'W')
				hor--;
			if (s[i] == 'E')
				hor++;

			if ('0' <= s[i] && s[i] <= '9')
			{
				st.push(MP(ver, hor));
				nt.push(s[i] - '0');
				ver = 0;
				hor = 0;
			}

			if (s[i] == ')')
			{
				ll mul = nt.top();

				ver = ver * mul + st.top().F;
				hor = hor * mul + st.top().S;
				nt.pop();
				st.pop();
			}

			if (ver >= 0)
				ver %= (int)1e9;
			else
				ver = (ll)1e9 - abs(ver) % (ll)1e9;

			if (hor >= 0)
				hor %= (int)1e9;
			else
				hor = (int)1e9 - abs(hor) % (ll)1e9;

			i++;
		}
		cout << "Case #" << k << ": " << hor + 1 << ' ' << ver + 1 << '\n';
	}


}

