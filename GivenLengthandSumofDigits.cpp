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






int main()
{
	init;

	int m, s;
	cin >> m >> s;
	int tmp1 = 0;
	int tmp2 = 0;

	string str;
	int num = '9';
	int M = m;
	while (m--)
	{
		num = min(num, '0' + s);
		str += (char)num;
		s -= (num - '0');
	}

	if ((M > 1 && str[0] == '0') || s)
	{
		cout << "-1 -1\n";
		return 0;
	}
	int i = 0;
	int j = str.length() - 1;
	string str1 = str;
	while (i < j)
	{
		//cout << i << ' ' << j << '\n';
		char ch = '0';
		if (i == 0)
			ch = '1';
		int k = min(str[i] - ch, '9' - str[j]);
		str[i] -= k;
		str[j] += k;
		if (str[i] == ch)
			i++;
		if (str[j] == '9')
			j--;

	}


	cout << str << ' ' << str1 << endl;


}