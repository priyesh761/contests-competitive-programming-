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


int Msize = 1e5;
vector<int> prime;
vector<bool> vis(Msize);
void P()
{
	prime.push_back(2);
	for (ll i = 3; i < Msize; i += 2)
		if (vis[i] == 0)
		{
			prime.push_back(i);
			for (ll j = i * i; j < Msize; j += i)
				vis[j] = 1;
		}
}


int main()
{
    init;
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll i=1;
        ll num1=1,num2=n-1;
        ll mn=1,mx=n-1;
        while(i*i<=n)
        {
            if(n%i==0){
            //cout<<num1<<' '<<num2<<'\n';    

            if(max(n/i,n-n/i)<max(i,n-i))
            num1=n/i,num2=n-n/i;
            else
            num1=n-i,num2=i;
            
            if(max(num1,num2)<mx)
            {
                mx=max(num1,num2);
                mn=min(num1,num2);
            }

            }
            i++;
        }
        
        cout<<mn<<' '<<mx<<'\n';    
    }
}