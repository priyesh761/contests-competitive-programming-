//TCS Mockvita 2 - 2020

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
   
    int n;
    cin>>n;

    string G,B;
    cin>>G>>B;

    int rc=0,mc=0;
    for(auto i:B)
    if(i=='r')
        rc++;
    else
        mc++;

    for(auto i:G)
    {
        if(i=='r')
        rc--;
        else
        mc--;
        if(rc<0||mc<0)
        break;
    }
    
    cout<<max(rc,mc);
    
    
}