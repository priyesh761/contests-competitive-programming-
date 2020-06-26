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

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n], b[n], c[n];
		memset(c, 0, sizeof(c));

		For(i, 0, n)
		{
			cin >> a[i];
			if (i != 0)
			{
				c[i] = c[i - 1];
				if (a[i - 1] == -1)
					c[i] |= 1;
				if (a[i - 1 ] == 1)
					c[i] |= 2;
			}
			//cout << a[i] << ' ' << c[i] << '\n';
		}
		bool status = true;
		For(i, 0, n)
		{
			cin >> b[i];
			//cout << status << '\n';
			if (b[i] == a[i])
				continue;

			if (b[i] < a[i])
				if ((c[i] & 1) == 0)
					status = false;

			if (b[i] > a[i])
				if ((c[i] & 2) == 0)
					status = false;

		}

		if (status)
			cout << "YES\n";
		else
			cout << "NO\n";

	}
}