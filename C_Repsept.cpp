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

    int k;
    cin>>k;

    if(k%2==0||k%5==0)
        cout<<-1;
    else{
        ll n=7;
        int cnt=1;
        while(n%k!=0){
            cnt++;
            n*=10;
            n+=7;
            n%=k;
         
        }
        cout<<cnt;
    }        

    
}