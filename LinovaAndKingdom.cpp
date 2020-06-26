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



int df(vc<vi>& adj, vc<bool>& visited, priority_queue<ll>& pq , int level = 0, int ind = 0)
{
	visited[ind] = true;
	int sum = 0;
	For(i, 0, adj[ind].size())
	{
		if (!visited[adj[ind][i]])
			sum += df(adj, visited, pq, level + 1, adj[ind][i]);
	}
	pq.push( level - sum);

	return sum + 1;

}


int main()
{
	init;

	int n, k;
	cin >> n >> k;

	vc<vi> adj(n);
	For(i, 0, n - 1)
	{
		int x, y;

		cin >> x >> y;
		x--;
		y--;
		adj[x].pb(y);
		adj[y].pb(x);

	}

	queue<pi> qu;

	qu.push(mp(0, 0));

	//int sum = 0;
	vc<bool> visited(n, false);
	priority_queue<ll> des;
	vi pat(n, 0);
	//memset(visited, 0, sizeof(visited));
	ll cnt = 0;

	df(adj, visited, des, 0);

	ll sum = 0;
	For(i, 0, k)
	{
		sum += des.top();
		des.pop();
	}

	cout << sum;



}