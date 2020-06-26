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

	int n, m, k;
	cin >> n >> m >> k;

	vi ar(n + 1);

	For(i, 0, n)
	cin >> ar[i];


	vc<vc<ll>> que(m, vc<ll>(3));

	For(i, 0, m)
	{
		cin >> que[i][0] >> que[i][1] >> que[i][2];
		que[i][0]--;
		que[i][1]--;
	}
	int x, y;

	vc<ll> op(m);
	while (k--)
	{
		cin >> x >> y;
		x--;
		op[x]++;
		if (y < m )
			op[y]--;

	}
	For(i, 1, m)
	op[i] += op[i - 1];
	/*
		For(i, 0, m)
		cout << op[i] << ' ';
		cout << endl;
	*/
	vc<ll> res(n);

	For(i, 0, m)
	{
		int st = que[i][0];
		int en = que[i][1];
		res[st] += op[i] * que[i][2];
		if (en + 1 < n)
			res[en + 1] -= op[i] * que[i][2];

	}

	For(i, 1, n)
	res[i] += res[i - 1];
	/*
		For(i, 0, n)
		cout << res[i] << ' ';
		cout << endl;
	*/
	For(i, 0, n)
	cout << res[i] + ar[i] << ' ';
}