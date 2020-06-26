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
	ll a[n + 1];
	a[0] = 0;
	For(i, 1, n + 1)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}

	ll num = 0;
	map<ll, ll> st;
	ll start = 0;
	For(i, 0, n + 1)
	{

		if (st.count(a[i]))
		{
			ll ind = st.find(a[i])->second;
			start = max(start, ind + 1);

		}

		num += (i - start);
		st[a[i]] = i ;

		//	cout << a[i] << ' ' << num << '\n';

	}
	cout << num;

}