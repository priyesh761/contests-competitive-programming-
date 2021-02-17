//Codevita round 2
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

class DSU
{
	vector<int> par;
	int num_sets;

public:
	DSU(int n)
	{
		par.resize(n, -1);
		num_sets = n;
	}

	int find(int i)
	{
		if (par[i] < 0)
			return i;
		return par[i] = find(par[i]);
	}

	void merge(int i, int j)
	{
		int parI = find(i);
		int parJ = find(j);

		if (parI == parJ)
			return;

		if (abs(par[parI]) > abs(par[parJ]))
		{
			par[parI] += par[parJ];
			par[parJ] = parI;
		}
		else
		{
			par[parJ] += par[parI];
			par[parI] = parJ;
		}
		num_sets--;
	}

	int get_num_sets() { return num_sets; }
};
bool func(pair<ll, int> &i, pair<ll, int> &j)
{
	if (i.F == j.F)
		return i.S >= j.S;
	return i.F <= j.F;
}
int main()
{
	init;

	int n;
	cin >> n;

	vector<ll> fnd(n);
	vector<pair<ll, int>> sum(n);
	for (int i = 0; i < n; i++)
		cin >> fnd[i];

	DSU dsu(n);
	int p;
	cin >> p;

	while (p--)
	{
		int a, b;
		cin >> a >> b;
		a--, b--;
		dsu.merge(a, b);
	}
	for (int i = 0; i < n; i++)
	{
		int par = dsu.find(i);
		sum[par].F += fnd[i];
		sum[par].S++;
	}
	for (int i = 0; i < n; i++)
		cout << sum[i].F << ' ' << sum[i].S << endl;
	cout << '\n';
	int grp_id = max_element(sum.begin(), sum.end(), func) - sum.begin();
	cout << sum[grp_id].F << ' ';
	for (int i = 0; i < n; i++)
	{
		int par = dsu.find(i);
		if (par == grp_id)
			cout << i + 1 << ' ';
	}
	cout << '\n';
}