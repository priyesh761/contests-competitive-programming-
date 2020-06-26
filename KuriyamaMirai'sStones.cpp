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

	int n;
	cin >> n;

	vc<int> ar(n);

	For(i, 0, n)
	cin >> ar[i];

	vc<ll> pre(n + 1);
	pre[0] = 0;
	For(i, 0, n)
	pre[i + 1] = pre[i] + ar[i];

	sort(ar.begin(), ar.end());


	vc<ll> spre(n + 1);
	spre[0] = 0;
	For(i, 0, n)
	spre[i + 1] = spre[i] + ar[i];


	int k;
	cin >> k;

	while (k--)
	{
		int type, l, r;
		cin >> type >> l >> r;

		if (type == 1)
		{
			cout << pre[r] - pre[l - 1] << '\n';
		}
		else
		{
			cout << spre[r] - spre[l - 1] << '\n';
		}
	}

}