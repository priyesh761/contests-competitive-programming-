#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);

typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x,y) memset(x,y,sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair


int solve(vector<int>& ar, int m = 0)
{
	vi tmp;
	tmp.PB(ar[0]);
	for (int i = 1; i < ar.size(); i++)
		if (ar[i] > ar[i - 1])
			tmp.PB(ar[i]);
	int s = ar.size();
	ar.clear();
	for (int i : tmp)
		ar.PB(i);
	tmp.clear();
	if (s != ar.size())
		m = solve(ar, m + 1);
	return m;
}



int main()
{
	init;

	int n;
	cin >> n;

	vi ar(n);

	for (int i = 0; i < n; ++i)
		cin >> ar[i];

	cout << solve(ar) << endl;



}