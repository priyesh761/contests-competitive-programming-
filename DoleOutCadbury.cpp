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

int func(int h, int w)
{
    int cnt=0;
    while(h>0&&w>0)
    {
        if(h>=w)
          h-=w;
        else
          w-=h;
        cnt++;
    }
    return cnt;
}
int main()
{
    init;
    int mi,mx,mi1,mx1;
    cin>>mi>>mx>>mi1>>mx1;

    int cnt=0;
    for(int i=mi;i<=mx;i++)
      for(int j=mi1;j<=mx1;j++)
        cnt+=func(i,j);
    
    cout<<cnt;
    
}