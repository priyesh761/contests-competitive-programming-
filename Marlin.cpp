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

	int n, k;
	cin >> n >> k;


	if (k <= 2 * n - 4)
	{
		cout << "YES\n";

		int cnt = 0;
		int mat[4][n];
		For(i, 0, 4) {
			For(j, n / 2, n)
			if (i != 0 && j != 0 && i < n - 1 && j < n / 2 && k)
			{
				k--;

			}
			else
				cout << '.';
			cout << endl;
		}
	}

}