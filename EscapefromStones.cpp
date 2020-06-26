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


void res(string& s, int ind, int cnt)
{
	if (ind == s.length())
		return;

	cnt++;
	if (s[ind] == 'r')
		cout << cnt << '\n';

	res(s, ind + 1, cnt);

	if (s[ind] == 'l')
		cout << cnt << '\n';

}



int main()
{
	init;

	string s;
	cin >> s;
	int cnt = 0;
	res(s, 0, cnt);

}