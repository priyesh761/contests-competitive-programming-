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
		int n, k;

		cin >> n >> k;
		string s;
		cin >> s;


		set<char> st;
		int cnt[26] = {0};
		for (auto i : s)
			cnt[i - 'a']++, st.insert(i);


		s = "";

		int mi = INT_MAX;
		for (int i = 0; i < 26; i++) {
			s.append(cnt[i], (char)(i + 97));
			if (cnt[i]& mi > cnt[i]) mi = cnt[i];
		}
		//cout << s << endl;
		string r, r1;
		if (s[0] != s[k - 1])
			cout << s[k - 1];
		else
		{
			if (st.size() == 1)
			{
				r.append(ceil((float)cnt[s[0] - 'a'] / k), s[0]);
			}
			else {
				cnt[s[0] - 'a'] -= k;

				r += s[0];
				if (cnt[s[0] - 'a'] == 0 && st.size() == 2)
				{
					r.append(ceil((float)cnt[s[k] - 'a'] / k), s[k]);

				}
				else
					for (int i = 0; i < 26 ; i++)
						if (cnt[i])
							r.append(cnt[i], i + 97);

			}
			cout << r;
		}




		cout << '\n';

	}
}






