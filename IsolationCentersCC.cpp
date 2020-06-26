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
	while (t--)
	{
		int n, q;
		cin >> n >> q;

		string s;
		cin >> s;

		int cnt[26] = {0};
		for (int i = 0; i < n; ++i)
			cnt[s[i] - 'a']++;

		while (q--)
		{
			int t;
			cin >> t;

			int ans = 0;
			for (int i = 0; i < 26; i++)
				ans += max(0, cnt[i] - t);
			cout << ans << '\n';

		}


	}
}