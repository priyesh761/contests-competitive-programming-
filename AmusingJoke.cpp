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

	int cnt[26];
	memset(cnt, 0, sizeof(cnt));

	string a, b, c;

	cin >> a >> b >> c;

	For(i, 0, a.length())
	cnt[a[i] - 'A']++;
	For(i, 0, b.length())
	cnt[b[i] - 'A']++;
	For(i, 0, c.length())
	cnt[c[i] - 'A']--;


	For(i, 0, 26)
	if (cnt[i])
	{
		cout << "NO";
		return 0;
	}
	cout << "YES";
}