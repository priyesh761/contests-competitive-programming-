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

	priority_queue<pi> ar;

	int x, y;
	For(i, 0, t)
	cin >> x >> y, ar.push(mp(x, y));

	int p = ar.top().F;
	int q = ar.top().S;

	ar.pop();
	bool status = true;
	while (!ar.empty())
	{
		int tp = ar.top().F;
		int tq = ar.top().S;
		ar.pop();
		if (tp < p && tq > q)
		{	status = false;
			break;
		}
		p = tp;
		q = tq;
	}

	if (status)
		cout << "Poor Alex";
	else
		cout << "Happy Alex";

}