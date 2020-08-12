//Codevita 2020
#include <bits/stdc++.h>
using namespace std;


vector<vector<bool>> starA = {
	{0, 1, 0},
	{1, 1, 1},
	{1, 0, 1}
};
vector<vector<bool>> starE = {
	{1, 1, 1},
	{1, 1, 1},
	{1, 1, 1}
};
vector<vector<bool>> starI = {
	{1, 1, 1},
	{0, 1, 0},
	{1, 1, 1}
};
vector<vector<bool>> starO = {
	{1, 1, 1},
	{1, 0, 1},
	{1, 1, 1}
};
vector<vector<bool>> starU = {
	{1, 0, 1},
	{1, 0, 1},
	{1, 1, 1}
};

char check(vector<vector<char>>& ch, int i, int j) {

	vector<bool> status(5, 1);
	if (j + 3 > (int)ch[0].size())
		return 0;

	for (int k = i; k < i + 3; +k++) {
		for (int m = j; m < j + 3; m++) {
			if ((starA[k - i][m - j] == 0 && ch[k][m] == '*') || (starA[k - i][m - j] == 1 && ch[k][m] != '*'))
				status[0] = 0;
			if ((starE[k - i][m - j] == 0 && ch[k][m] == '*') || (starE[k - i][m - j] == 1 && ch[k][m] != '*'))
				status[1] = 0;
			if ((starI[k - i][m - j] == 0 && ch[k][m] == '*') || (starI[k - i][m - j] == 1 && ch[k][m] != '*'))
				status[2] = 0;
			if ((starO[k - i][m - j] == 0 && ch[k][m] == '*') || (starO[k - i][m - j] == 1 && ch[k][m] != '*'))
				status[3] = 0;
			if ((starU[k - i][m - j] == 0 && ch[k][m] == '*') || (starU[k - i][m - j] == 1 && ch[k][m] != '*'))
				status[4] = 0;

		}
	}
	if (status[0] && status[1] && status[2] && status[3] && status[4])
		return 0;
	if (status[0])
		return 'A';
	if (status[1])
		return 'E';
	if (status[2])
		return 'I';
	if (status[3])
		return 'O';
	if (status[4])
		return 'U';

	return 0;
}
int main()
{
	int n;
	cin >> n;

	vector<vector<char>> v(3, vector<char>(n));
	char tmp;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < n; j++)
			cin >> v[i][j];


	string res;

	for (int i = 0; i < n; i++) {
		if (v[0][i] == '#') {
			res += '#';
		}
		else {
			char val = check(v, 0, i);
			if (val != 0)
			{
				res += val;
				i += 2;
			}
		}
	}
	cout << res;

}