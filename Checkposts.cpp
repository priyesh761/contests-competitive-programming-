#include<bits/stdc++.h>
using namespace std;

using ll = unsigned long long;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);

typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x,y) memset(x,y,sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair
vector<vector<int>> G(300000);
vector<vector<int>> NG(300000);
bool visited[300000] = {0};
stack<int> st;
void dfs(int x)
{
	visited[x] = true;

	for (auto& i : G[x])
	{
		if (visited[i] == false)
		{
			dfs(i);
		}
	}
	st.push(x);
}

void dfs1(vector<int>& r, int x)
{
	visited[x] = true;
	r.PB(x);
	for (auto& i : NG[x])
		if (visited[i] == false)
			dfs1(r, i);

}


int main()
{
	init;

	int n;
	cin >> n;

	int cost[n];
	for (int i = 0; i < n; i++)
		cin >> cost[i];
	int m;
	cin >> m;


	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		x--, y--;
		G[x].PB(y);
		NG[y].PB(x);
	}

	for (int i = 0; i < n; i++)
		if (visited[i] == false)
			dfs(i);
	MS(visited, 0);
	ll ways = 1;
	ll co = 0;
	while (!st.empty())
	{
		vector<int> tmp;
		if (visited[st.top()] == false)
			dfs1(tmp, st.top());
		ll mi = INT_MAX, way = 0;
		for (int i : tmp)
			if (cost[i] <= mi)
				if (mi == cost[i])
					way++;
				else {
					mi = cost[i];
					way = 1;
				}

		if (mi != INT_MAX)
			co += mi , ways = (ways * way) % mod;
		st.pop();
	}
	cout << co << ' ' << ways << '\n';

}