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

int ar[1000000];
int b[1000000];
vector<vector<int>> qu(1000000, vector<int>(3));
vector<int> ans(1000000);
bool cmp(vector<int>& a, vector<int>& b)
{
	if (a[1] != b[1])
		return a[1] < b[1];
	return (a[1] & 1) ? a[2] > b[2] : a[2] < b[2];
}

void mo(vector<vector<int>>& qu, int m, int k)
{
	int cL = 0, cR = 0;
	int xo = ar[0];
	for (int i = 0; i < m; i++) {
		while (cL < qu[i][1])
			xo ^= ar[cL++];
		while (cL > qu[i][1])
			xo ^= ar[cL--];
		while (cR < qu[i][2])
			xo ^= ar[cR++];
		while (cR > qu[i][2])
			xo ^= ar[cR--];
		cout << cL << ' ' << cR << endl;
		ans[qu[i][0]] = xo;
	}
}

int main()
{
	init;

	int n, m, k;
	cin >> n >> m >> k;

	MS(b, 0);
	for (int i = 0; i < n; i++)
		cin >> ar[i], b[];

	for (int i = 0; i < m; i++)
		cin >> qu[i][1] >> qu[i][2], qu[i][1]--, qu[i][2]--, qu[i][0] = i;


	sort(qu.begin() , qu.begin() + m, cmp);

	mo(qu, m);
	for (int i = 0; i < m; i++)
		cout << ans[i] << '\n';


}