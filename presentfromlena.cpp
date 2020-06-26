#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair






int main()
{
	init;
	int t;
	cin >> t;

	for (int i = 0; i < 2 * t + 1; i++) {
		int sub = i;
		if (i > t)
			sub = t - abs(i - t);

		bool status = false;
		for (int j = 0; j < 2 * t + 1; j++)
		{

			if ( t - sub <= j && j <= t + sub )
			{
				if (status)
					cout << ' ';
				cout << sub - abs(t - j) ;
				status = true;

			}
			else if (j < t)
				cout << "  ";
		}
		cout << endl;
	}

}