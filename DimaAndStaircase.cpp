#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);
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

	int ar[n];
//	cout << 1;

	For(i, 0, n)
	cin >> ar[i];
//	cout << 1;

	int k;
	cin >> k;

	int width, height;
	int j = 0;
	ll maxH = 0;
	//cout << 2;

	For(i, 0, k)
	{
		cin >> width >> height;
		//	cout << i;
		while (j < n && j + 1 < width)
			j++;
		ll temp;
		if (j >= n)
			temp = 0;
		else
			temp = ar[j];

		maxH = max(maxH, temp);
		cout << maxH << '\n';
		maxH += height;
	}



}