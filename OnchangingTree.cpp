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


ll seg[4 * 300000 + 1] = {0};
ll seg1[4 * 300000 + 1] = {0};
int startT[300000 + 1] = { -1};
int endT[300000 + 1] = { -1};
int level[300000 + 1] = {1};
int dfs(vector<vi>& adj, int ind = 1, int time = 0, int lev = 0)
{
	startT[ind] = time;
	level[ind] = lev;
	for (int i = 0; i < adj[ind].size(); i++)
		time = dfs(adj, adj[ind][i], time + 1, lev + 1);

	endT[ind] = time;
	return time ;
}

void segupdate(int l, int r, int v, int val, int k, int segL = 0, int segR = 300000, int ind = 0)
{

	if (l > segR || r < segL || segR < segL)
		return;
	if (segL == segR && l <= segL && r >= segR)
	{
		seg[ind] = (seg[ind] + val + level[v] * k) % mod;
		seg[ind] += (seg[ind] < 0) ? mod : 0;
		seg1[ind] = (seg1[ind] + k) % mod;
		seg1[ind] += (seg1[ind] < 0) ? mod : 0;
	}
	else
	{
		int mid = segL + (segR - segL) / 2;
		segupdate(l, r, v, val, k, segL, mid, 2 * ind + 1);
		segupdate(l, r, v, val, k, mid + 1, segR, 2 * ind + 2);
		seg[ind] = (seg[2 * ind + 1] + seg[2 * ind + 2]) % mod;
		seg1[ind] = (seg1[2 * ind + 1] + seg1[2 * ind + 2]) % mod;
	}
	cout << segL << ' ' << segR << ' ' << seg[ind] << ' ' << seg1[ind] << endl;

	return;
}

ll segquery(int qu, int segL = 0, int segR = 300000, int ind = 0 )
{
	if (qu == segL && qu == segR) {
		ll ans = (seg[ind] - level[qu] * seg1[ind]) % mod;
		return ans + ((ans < 0) ? mod : 0);
	}

	if (segL > qu || segR < qu)
		return 0;

	int mid = segL + (segR - segL) / 2;

	return segquery(qu, segL, mid, 2 * ind + 1) + segquery(qu, mid + 1, segR, 2 * ind + 2);

}

int main()
{
	init;

	int n;
	cin >> n;

	vector<vi> adj(n + 1);

	int tmp;
	for (int i = 2; i <= n; i++)
	{
		cin >> tmp;
		adj[tmp].PB(i);
	}

	dfs(adj);

	/*for (int i = 1; i <= n; i++)
		cout << startT[i] << ' ';
	cout << endl << endl;
	for (int i = 1; i <= n; i++)
		cout << endT[i] << ' ';
	*/

	int q, ty, v, x, k;
	cin >> q;

	while (q--)
	{
		cin >> ty;
		if (ty == 1)
		{
			cin >> v >> x >> k;
			segupdate(startT[v], endT[v], v , x, k, 0, n - 1);
		}
		else
		{
			cin >> v;
			cout << segquery(v, 0, n - 1) << '\n';
		}
	}
}