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

bool cmp(pi x, pi y)
{
	if (x.F == y.F)
		return x.S < y.S;

	return x.F > y.F;
}




int main()
{
	init;

	int n, k;
	cin >> n >> k;

	vc<pi> ar(n);
	For(i, 0, n)
	cin >> ar[i].F >> ar[i].S;

	sort(ar.begin(), ar.end(), cmp);

	int rank = 1;
	int num = 1;

	For(i, 1, n)
	{
		rank++;
		if (ar[i] == ar[i - 1])
			num++;
		else
		{
			if (rank > k)
				break;
			num = 1;
		}
	}

	cout << num;

}