#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int ck(string& s,int i,int j,char c)
{
    if(i==j)
        return(s[i]!=c);
    int mid= i+(j-i)/2;
    int cnt=0,cnt2=0;
    for(int ii=i;ii<=mid;ii++)
    {
        if(s[ii]==c)
            cnt++;
        if(s[ii-i+mid+1]==c)
            cnt2++;
    }
 
    int ans=0,ans1=0;

    ans+=(mid+1-i-cnt2);
    ans+=ck(s,i,mid,c+1);
   
    ans1+=(mid+1-i-cnt);
    ans1+=ck(s,mid+1,j,c+1);
   
    return min(ans,ans1);
}

int main()
{
    init;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<(ck(s,0,n-1,'a'))<<'\n';
    }
}