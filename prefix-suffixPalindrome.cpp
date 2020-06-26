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

int kmp(string& s)
{
	int km[s.length()];
	km[0] = 0;
	int l = 0;
	int maxi = 1;
	for (int i = 1; i < s.length(); i++)
	{
		l = km[i - 1];
		while (l > 0 && s[i] != s[l])
			l = km[l - 1];
		if (s[i] == s[l])
			l++;
		km[i] = l;
	}
	return km[((int)s.length()) - 1];
}




int main()
{
	init;

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int l = s.length();

		int i = 0, j = l - 1;
		while (i < j && s[i] == s[j]) {
			i++, j--;
		}

		string res;
		if (i)
			res = s.substr(0, i);
		if (l - 2 * i > 0) {
			string tmp1 = s.substr(i , l - 2 * i);

			string tmp = tmp1 + '?';
			reverse(tmp1.begin(), tmp1.end());
			tmp += tmp1;
			int l1 = kmp(tmp);

			string tmp2 = tmp1 + '?';
			reverse(tmp1.begin(), tmp1.end());
			tmp2 += tmp1;
			int l2 = kmp(tmp2);

			if (l1 > l2)
				res += tmp.substr(0, l1);
			else
				res += tmp2.substr(0, l2);
		}
		if (i)
			res += s.substr(l - i, i);

		cout << res << "\n";
	}
}