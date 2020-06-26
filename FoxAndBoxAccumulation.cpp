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

	int n;
	cin >> n;



	int a[n];

	For(i, 0, n)
	cin >> a[i];

	sort(a, a + n);
	map<int, int> mpa;
	int piles = 0;
	For(i, 0, n)
	{
		int j;
		bool status = true;
		for ( j = a[i]; j > 0; j--)
			if (mpa.count(j))
			{	//cout << j << '\n';

				mpa[j]--;
				if (mpa[j] == 0)
					mpa.erase(mpa.find(j));
				mpa[j + 1]++;
				piles--;
				status = false;
				break;
			}
		if (status)
			mpa[1]++;

		piles++;
	}


	cout << piles;
}