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
		string s, res;
		cin >> s;

		bool status = true;
		for (int i = 1; i < s.length(); i++)
			if (s[i] != s[i - 1])
			{
				status = false;
				break;
			}

		if (status)
			cout << s;
		else
		{
			for (int i = 0; i < 2 * s.length(); i++)
				res += (i % 2) ? '0' : '1';
			cout << res;
		}
		cout << '\n';
	}
}