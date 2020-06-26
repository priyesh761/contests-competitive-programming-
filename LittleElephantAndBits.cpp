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
	bool status = true;
	For(i, 0, s.length())
	{
		if (status && s[i] == '0')
		{
			status = false;
			continue;
		}
		if (i == s.length() - 1 && status)
			continue;
		cout << s[i];

	}

}