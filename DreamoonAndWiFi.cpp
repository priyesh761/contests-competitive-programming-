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

	string a, b;

	cin >> a >> b;

	int ques = 0;
	int posa = 0, posb = 0;

	For(i, 0, a.length())
	{
		if (a[i] == '+')
			posa++;
		if (a[i] == '-')
			posa--;

		if (b[i] == '+')
			posb++;
		if (b[i] == '-')
			posb--;

		if (b[i] == '?')
			ques++;
	}
	int req = posa - posb;
	if (req > ques || req < (-1 * ques))
	{
		cout << (double) 0;
		return 0;
	}
	if (ques == 0)
	{
		if (posa == posb)
			cout << (double) 1;
		else
			cout << (double)0;
		return 0;
	}

	vc<vi> dp(ques, vi( 2 * ques + 1));
	dp[0][ques + 1] = dp[0][ques - 1] = 1;

	For(i, 1, ques)
	{
		For(j, 0, 2 * ques + 1)
		{
			if (dp[i - 1][j])
			{
				if (j != 0)
					dp[i][j - 1] += dp[i - 1][j];
				if (j != 2 * ques)
					dp[i][j + 1] += dp[i - 1][j];
			}
		}
	}
	double ways = dp[ques - 1][ques + req];
	cout.precision(17);
	cout << fixed << ways / pow(2, ques);

}