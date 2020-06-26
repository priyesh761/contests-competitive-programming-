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


void prt(int* ar, int n)
{
	for (int i = 1; i <= n; i++)
		cout << ar[i] << ' ';
	cout << endl;
}



int main()
{
	init;

	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;

		int ar[n + 1], po[n + 1], po1[n + 1];
		int tmp;
		for (int i = 1; i < n + 1; i++)
			cin >> po[i], ar[po[i]] = i; ;
		int curr[n + 1];
		for (int i = 1; i <= n; i++)
			curr[i] = i, po1[i] = i;
		set<pi> mp;
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			mp.insert(MP(x, y));
			mp.insert(MP(y, x));
		}
		int min = 0;

		prt(curr, n);

		for (int i = 1; i <= n; i++)
		{	//cout << i << ' ';
			bool status = true;
			while (status) {
				status = false;
				for (auto i : mp)
				{
					if (ar[i.F] == curr[i.S])
					{
						swap(curr[i.F], curr[i.S]);
						po1[curr[i.F]] = i.F;
						po1[curr[i.S]] = i.S;
						status = true;
					}
				}
			}



			if (ar[i] != curr[i])
			{
				int ind = po1[ar[i]];
				if (mp.count(MP(i, ind)) == 0)
					min++;
				swap(curr[i], curr[ind]);
				po1[curr[i]] = i;
				po1[curr[ind]] = ind;
			}

		}


		cout << min << '\n';




	}
}