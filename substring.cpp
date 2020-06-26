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

bool sub(string s1, string r1)
{
	int p=0;
	rep(i,0,s1.length())
	{
		if(p==r1.length())
			return 1;
		if(s1[i]==r1[p])
			p++;
		else
		{
			i-=p;
			p=0;
		}
	}
	return 0;
}




int main()
{
	init;
	string s1,s2,r1,r2;
	cin>>s1>>r1>>s2>>r2;
	
	if(sub(s1,r1))
		cout<<1<<endl;
	else
		cout<<0<<endl;


	if(sub(s2,r2))
		cout<<1<<endl;
	else
		cout<<0<<endl;
	
}