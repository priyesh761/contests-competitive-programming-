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
		ll n, d;
		cin >> n >> d;

		ll ar[n];

		for (ll i = 0; i < n; i++)
			cin >> ar[i];

		ll mini = d;

		for (ll i = n - 1; i >= 0; i--)
			mini = (mini / ar[i]) * ar[i];


		cout << "Case #" << k << ": " << mini << '\n';
	}


}