#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair






int main()
{
	init;
	int n;
	cin>>n;
	vi ar(n);
	vi b(n);
	rep(i,0,n)
		cin>>ar[i];

	rep(i,0,n)
		cin>>b[i];

	ll joy=0;

	rep(i,0,n)
		if(b[i]>2*ar[i]||b[i]<2)
			joy--;
		else
			joy= joy+ (ll)(b[i]/2)*((ll)(b[i]-b[i]/2));


	cout<<joy;

}