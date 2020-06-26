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






int main()
{
	init;

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ar[n], tmp;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			ar[tmp - 1] = i;
		}
		bool vis[n];
		MS(vis, false);
		int max = -1;
		bool status = true;
		for (int i = 0; i < n; i++)
		{

			if (max != -1 && !vis[max] && ar[i] != max);
			{
				status = false;
				break;
			}

			max = (!vis[ar[i] + 1]) ? ar[i] + 1 : -1;

			vis[ar[i]] = true;


		}
		if (status)
			cout << "Yes\n";
		else
			cout << "No\n";


	}
}