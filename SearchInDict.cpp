#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);

typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x,y) memset(x,y,sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair


struct dat
{
	dat* v[26] = {nullptr};
	bool status = false;
} root;

void insert(dat* d, string& s, int ind = 0)
{
	if (ind == s.length()) {
		d->status = 1;
		return;
	}

	if (d->v[s[ind] - 97] == nullptr)
		d->v[s[ind] - 97] = new dat();


	insert(d->v[s[ind] - 97], s, ind + 1);
}

void dfs(dat* d, string& res, bool p)
{
	if (d->status && p)
		cout << res << '\n';

	for (int i = 0; i < 26; i++)
	{
		if (d->v[i])
		{
			res.PB(i + 97);
			dfs(d->v[i], res, 1);
			res.pop_back();
		}
	}

}

bool query(dat*d, string& s, int ind = 0)
{
	if (d->v[s[ind] - 97] == nullptr)
		return false;
	if (ind == s.length() - 1)
	{

		dfs(d->v[s[ind] - 97], s, 0);
		return true;
	}


	return query(d->v[s[ind] - 97], s, ind + 1);
}

int main()
{
	init;

	int n;
	cin >> n;

	string s;


	while (n--)
	{
		cin >> s;
		insert(&root, s);
	}

	int k;
	cin >> k;

	for (int i = 0; i < k; ++i)
	{
		cin >> s;
		cout << "Case #" << i + 1 << ":\n";
		if (!query(&root, s))
			cout << "No match.\n";
	}


}