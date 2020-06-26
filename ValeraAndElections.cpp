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
bool visited[100000] = {0};
vector<vector<pi>> G(100000);
set<int> can;

int dfs( int x, bool bad = 0)
{
	visited[x] = true;
	int road = 0;
	bool r = 0;
	for (auto& i : G[x])
	{
		if (visited[i.F] == false)
		{
			road += dfs(i.F, (i.S == 2));
		}
	}
	if (road == 0 && bad) {
		can.insert(x);
		return 1;
	}
	return road;
}




int main()
{
	init;

	int n;
	cin >> n;



	for (int i = 0; i < n - 1; i++)
	{
		int x, y, t;
		cin >> x >> y >> t;
		x--, y--;
		G[x].PB(MP(y, t));
		G[y].PB(MP(x, t));
	}

	cout << dfs(0) << endl;
	for (auto i : can)
		cout << i + 1 << ' ';
	cout << endl;

}