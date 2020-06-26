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
#define PB push_back
#define MP make_pair


void dfs(int curr, vc<bool>& visited, vc<vi>& adj)
{
	visited[curr] = 1;
	//cout << curr << endl;
	For(i, 0, adj[curr].size())
	{
		if (visited[adj[curr][i]] == 0)
		{
			dfs(adj[curr][i], visited, adj);
		}
	}
}



int main()
{
	init;

	int n;
	cin >> n;

	vc<vi> adj(n);
	vc<vi> row(1001), col(1001);
	map<pi, int> mp;
	For(i, 0, n)
	{
		int x, y;
		cin >> x >> y;
		mp[MP(x, y)] = i;

		int k = mp[MP(x, y)];
		for (int j : row[x])
		{
			int id = mp[MP(x, j)];
			adj[i].PB(id);
			adj[id].PB(i);
			break;
		}
		for (int j : col[y])
		{
			int id = mp[MP(j, y)];
			adj[i].PB(id);
			adj[id].PB(i);
			break;
		}
		row[x].PB(y);
		col[y].PB(x);
	}
	/*
		for (auto i : mp)
			cout << i.F.F << ' ' << i.F.S << i.S << endl;


		for (auto i : adj) {
			for (auto j : i)
				cout << j << " sp ";
			cout << '\n';
		}

	*/
	vc<bool> visited(n, 0);
	int cnt = 0;
	For(i, 0, n)
	{
		if (visited[i] == 0)
		{
			cnt++;
			dfs(i, visited, adj);
		}
	}
	cout << cnt - 1;

}

// Alternative easy approach;
/*

int n, x[101], y[101], ans = -1, vis[101];
void dfs(int a)
{
	vis[a] = 1;
	for (int i = 1; i <= n; i++)
		if ((x[i] == x[a] || y[i] == y[a]) && !vis[i])
			dfs(i);
	}


int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> x[i] >> y[i];
	 for (int i = 1; i <= n; i++)
	 	if (!vis[i])dfs(i), ans++;
	  cout << ans << endl;
}
*/