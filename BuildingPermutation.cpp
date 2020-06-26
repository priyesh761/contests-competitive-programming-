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

	int ar[n];

	For(i, 0, n)
	cin >> ar[i];

	sort(ar, ar + n);

	ll num = 0;

	rFor(i, n - 1, -1)
	{
		num +=  abs(i + 1 - ar[i]);
	}

	cout << num;
}