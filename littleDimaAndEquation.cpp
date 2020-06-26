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


int ds(ll num)
{
	int s = 0;
	while (num > 0)
	{
		s += num % 10;
		num /= 10;
	}
	return s;
}



int main()
{
	init;

	ll a, b, c;
	cin >> a >> b >> c;
	vi res;
	for (int i = 1; i < 81; ++i)
	{
		ll num = b * pow(i, a) + c;
		if (ds(num) == i && num > 0 && num < 1000000000)
			res.pb(num);
	}

	cout << res.size() << '\n';

	for (auto i : res)
		cout << i << ' ';
}

