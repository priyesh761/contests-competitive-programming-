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






int main()
{
	init;

	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;

		vi in(n + 1);
		vi out(n + 1);

		for (int i = 0; i < n - 1; i++)
		{
			int tx, ty;
			cin >> tx >> ty;
			in[ty]++;
			out[tx]++;
		}
		if (in[x] + out[x] < 2)
		{
			cout << "Ayush\n";
			continue;
		}



		if ((n - 1) & 1)
			cout << "Ayush\n";
		else
			cout << "Ashish\n";

	}
}