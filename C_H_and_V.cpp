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
char mat[10][10];
int n,m,k;

bool col(int i,int j)
{
    int cnt=0;
    for(int z=0;z<n;z++)
        if((i&(1<<z))==0)
            for(int y=0;y<m;y++)
                if((j&(1<<y))==0)
                    if(mat[z][y]=='#')
                        cnt++;
    return cnt==k;
}

int main()
{
    init;
    cin>>n>>m>>k;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mat[i][j];

    int cnt=0;
    for(int i=0;i<(1<<n);i++)
        for(int j=0;j<(1<<m);j++)
            if(col(i,j))
                cnt++;
    cout<<cnt;
}