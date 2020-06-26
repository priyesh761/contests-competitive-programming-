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

void swapo(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}




int main()
{
	init;

	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int ar[n + 1], po[n + 1];
		set<int> ns;
		set<pair<int, int>> sw;
		for (int i = 1; i <= n; ++i)
		{
			cin >> ar[i];
			po[ar[i]] = i;
			if (ar[i] != i)
				ns.insert(i);
		}
		for (int i = 1; i <= n; i++)
			if (ar[ar[i]] == i && ar[i] != i)
				sw.insert(MP(min(i, ar[i]), max(i, ar[i])));

		int nsi = ns.size();

		vector<vi> v;
		while ((!ns.empty()) && k--)
		{
			int ind1 = *ns.begin();
			int ind3 = po[ind1];
			int ind2 = ar[ind1];
			if (ind2 == ind3)
			{
				sw.erase(MP(ind1, ind2));
				for (auto kl : sw)
					if (kl.F != ind1 && kl.F != ind3)
					{
						ind2 = kl.F;
						sw.erase(kl);
						break;
					}
				if (ind2 == -1)
				{
					for (auto kl : ns)
						if (kl != ind1 && kl != ind3)
						{
							ind2 = kl;
							break;
						}
				}
				if (ind2 == -1)break;
			}



			swapo(ar[ind1], ar[ind2]);
			swapo(ar[ind1], ar[ind3]);

			po[ar[ind1]] = ind1;
			po[ar[ind2]] = ind2;
			po[ar[ind3]] = ind3;
			for (int i = 1; i <= n; i++)
				cout << ar[i] << ' ';
			cout << endl;
			for (int i = 1; i <= n; i++)
				cout << po[i] << ' ';
			cout << endl;

			vi tmp = {ind1, ind2, ind3};
			v.PB(tmp);

			if (ar[ind1] == ind1)
				ns.erase(ind1);
			if (ar[ind2] == ind2)
				ns.erase(ind2);

			if (ar[ind3] == ind3)
				ns.erase(ind3);
			//for (auto i : ns)
			//	cout << i << ' ';
			//cout << endl;

		}
		if (ns.empty())
		{
			cout << v.size() << '\n';
			for (auto i : v) {
				for (auto j : i)
					cout << j << ' ';
				cout << endl;
			}
		}
		else
			cout << -1 << '\n';
	}
}