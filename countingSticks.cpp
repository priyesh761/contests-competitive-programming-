//wrong soln
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
	string s;
	cin>>s;
	int cnt1=0,cnt2=0;
	int i=0;

	while(s[i]!='+') i++;

	string a = s.substr(0,i);
	i++;
	int j=i;
	while(s[i]!='=')i++;
	//cout<<s[j];
	string b= s.substr(j,i-j);


	string c= s.substr(i+1,s.length()-i-1);

//	cout<<a<<endl<<b<<endl<<c<<endl;
	

	cnt1=a.length()+b.length();
	cnt2=c.length();



	if(cnt2-cnt1==2||cnt2-cnt1==0)
	{
		if(cnt1==cnt2)
			cout<<s;
		else
		{
			cout<<'|'+s.substr(0,s.length()-1);

		}
	}
	else
		if (cnt1-cnt2==2)
		{
			if(a.length()>b.length())
				cout<<a.substr(0,a.length()-1)<<'+'<<b<<'='<<(c+'|');
			else
				cout<<a<<'+'<<b.substr(0,b.length()-1)<<'='<<(c+'|');
		}
		else
			cout<<"Impossible";
}