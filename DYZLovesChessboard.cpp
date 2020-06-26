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






int main()
{
	init;

	int n, m;
	cin >> n >> m;

	char mat[n][m];

	For(i, 0, n)
	For(j, 0, m)
	cin >> mat[i][j];


	For(i, 0, n)
	{	For(j, 0, m)
		if (mat[i][j] == '.')
		{
			if ((i + j) % 2 == 0)
			{
				cout << 'B';
				mat[i][j] = 'B';
			}
			else {
				cout << 'W';

			}
		}
		else
			cout << mat[i][j];
		cout << endl;
	}
}