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


void dfs(vc<vi>& adj, vc<bool>& vis, int ind)
{	//cout << ind << '\n';
	vis[ind] = true;
	For(i, 0, adj[ind].size())
	if (vis[adj[ind][i]] == false)
		dfs(adj, vis, adj[ind][i]);

}


int main()
{
	init;

	int n, m;
	cin >> n >> m;

	int cnt = 0;
	vc<vi> adj(n);
	vc<vi> lang(m);
	For(i, 0, n)
	{
		int x;
		cin >> x;
		if (!x)
			cnt++;
		while (x--)
		{
			int l;
			cin >> l;
			lang[--l].pb(i);
		}

	}
	if (cnt == n)
		cnt = 1;
	else
		cnt = 0;
	For(i, 0, m)
	For(j, 1, lang[i].size())
	{
		adj[lang[i][j - 1]].pb(lang[i][j]);
		adj[lang[i][j]].pb(lang[i][j - 1]);
	}

	vc<bool> visited(n, false);

	For(i, 0, n)
	{
		if (visited[i] == 0)
		{	//cout << i << '\n';
			dfs(adj, visited, i);
			cnt++;
		}
	}
	cout << cnt - 1;
}