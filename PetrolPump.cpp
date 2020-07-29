//TCS mockvita 2  - 2020

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

int main()
{
    init;
    
    string s;
    while(!getline(cin,s));

    istringstream stream(s);

    vi ar;

    int x;
    int sum=0;
    while(stream>>x){
        ar.PB(x);
        sum+=x;
    }

    int dp[sum+1];
    MS(dp,0);
    dp[0]=1;


    for(int i=1;i<(int)ar.size();i++)
    {
        for(int j=sum;j>=0;j--)
            if(j>=ar[i]&&dp[j-ar[i]]==1)
            dp[j]=1;
    }
    int num=sum;
    int tmp=0;
    for(int i=0;i<=sum;i++)
    if(dp[i]&&abs(i-sum/2)<=num){
    num=abs(i-sum/2);
    tmp=i;
    }
    
    cout<<max(tmp,sum-tmp);
}