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

		ll a[n], b[n], c[n];

		For(i, 0, n)
		cin >> a[i], cin >> b[i];

		ll sum = 0;
		For(i, 1, n + 1)
		c[i % n] = max(0LL, a[i % n] - b[i - 1]), sum += c[i % n];

		ll mini = INT_MAX;
		For(i, 0, n)
		mini = min(mini, a[i] - c[i]);

		cout << mini + sum << '\n';



	}
}