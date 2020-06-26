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


int dfs(vc<vi>& adj, int root, int depth = 1)
{
	int maxi = depth;
	For(i, 0, adj[root].size())
	maxi = max(maxi, dfs(adj, adj[root][i], depth + 1));

	return maxi;
}



int main()
{
	init;

	int n;
	cin >> n;
	vc<vi> adj(n);
	For(i, 0, n)
	{
		int x;
		cin >> x;
		if (x != -1)
			adj[i].pb(x - 1);
	}
	int x = 0;
	For(i, 0, n)
	x = max(x, dfs(adj, i));

	cout << x;
}