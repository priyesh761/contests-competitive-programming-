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

	int t;
	cin >> t;

	int sum = 0, maxi = INT_MIN, cnt = 0;

	for (int i = 0; i < t; ++i)
	{
		int temp;
		cin >> temp;
		if (temp) {
			temp = -1;
			cnt++;
		}
		else
			temp = 1;

		sum = max(sum + temp, temp);

		maxi = max(maxi, sum);
	}
	//1cout << maxi << endl;

	cout << cnt + maxi; ;



}