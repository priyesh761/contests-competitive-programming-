// Inncorrect
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

ll ar[500000 + 1];
ll pref[500000 + 1];



int main()
{
	init;

	int n;

	cin >> n;

	vector<int> num(n);

	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> num[i];
		sum += num[i];
	}


	int fin = sum / 3;
	int tmp = 0;
	int cnt = 0;
	if (sum % 3 == 0)
		for (int i = 0; i < n; i++)
		{
			tmp += num[i];
			if (tmp == fin)
			{
				int tsum = 0;
				for (int j = i + 1; j < n - 1; j++)
				{
					tsum += num[j];
					if (tsum == fin)
					{
						cnt++;
					}
				}
			}
		}
	cout << cnt;


}