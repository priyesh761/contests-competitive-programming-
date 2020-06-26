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

	int ar[n + 1];
	ar[0] = 0;
	For(i, 1, n + 1)
	{
		cin >> ar[i];
		ar[i] += ar[i - 1];
	}
	int min = INT_MAX;
	int ind = 0;
	For(i, k, n + 1)
	{
		if (ar[i] - ar[i - k] < min)
		{
			min = ar[i] - ar[i - k];
			ind = i - k + 1;
		}

	}

	cout << ind;
}