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

	string s;
	cin >> s;

	vc<ll> pre(s.length() + 1, 0);
	pre[0] = 0;
	for (int i = 0; i < s.length(); i++)
		if (i != s.length() - 1 && s[i] == s[i + 1])
			pre[i + 1] = pre[i] + 1;
		else
			pre[i + 1] = pre[i];



	int k;
	cin >> k;



	while (k--)
	{
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		cout << pre[y] - pre[x] << '\n';
	}

}