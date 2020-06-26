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

void shortest(map<pi, int>&choosen, vector<vi>& v, int from, int to)
{
	int n = v.size();
	queue<int> q;

	int parent[n];
	bool vis[n];

	MS(parent, -1);
	MS(vis, false);

	q.push(from);
	vis[from] = true;


	while (!q.empty())
	{
		int curr = q.front();
		q.pop();
		if (curr == to)
			break;
		for (int i = 0; i < v[curr].size(); i++)
			if (!vis[v[curr][i]] )
			{
				vis[v[curr][i]] = true;
				parent[v[curr][i]] = curr;
				q.push(v[curr][i]);
			}

	}
	int p = to;

	while (p != from)
	{
		choosen[MP(min(p, parent[p]), max(p, parent[p]))]++;
		p = parent[p];
	}


}




int main()
{
	init;

	int t;
	cin >> t;
	while (t--)
	{
		int n, m, a, b, c;
		cin >> n >> m >> a >> b >> c;


		vector<vi> v(n + 1);

		vi price(m);
		for (int i = 0; i < m; ++i)
			cin >> price[i];

		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;

			v[x].PB(y);
			v[y].PB(x);
		}

		map<pi, int> mp;

		shortest(mp, v, a, b);

		shortest(mp, v, b, c);

		sort(price.begin(), price.end());

		int sum = 0;
		int ar[mp.size()];
		auto it = mp.begin();
		for (int i = 0; i < mp.size(); i++)
		{	ar[i] = it->S, it++;

		}
		sort(ar, ar + mp.size(), greater<int>());
		for (int i = mp.size() - 1; i >= 0; i--)
		{
			sum += price[i] * ar[i];
		}
		cout << sum << '\n';
	}
}