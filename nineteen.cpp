#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

//#typedef int=long long
#define mod 1000000007

template<typename... T>
void deb(T&... args){
	((cout<<args<<" "), ...);
}

int main()
{
	string s;
	cin>>s;
	vc<int> cnt(4,0);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='n')
			cnt[0]++;
		if(s[i]=='i')
			cnt[1]++;
		if(s[i]=='e')
			cnt[2]++;
		if(s[i]=='t')
			cnt[3]++;
			
	}
	cnt[0]=max(-1,cnt[0]-3);
	if(cnt[0]!=-1)
		cnt[0]+=2;
	cnt[0]/=2;
	cnt[2]/=3;
	//deb(cnt[0],cnt[1],cnt[2],cnt[3]);
	//cout<<endl;
	cout<<min(cnt[0],min(cnt[1],min(cnt[2],cnt[3])))<<endl;
}