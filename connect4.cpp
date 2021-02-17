#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

bool check(vector<vector<int>> &v, int x, int y, int cl)
{

    int xxvl = max(0, x - 3);
    int xxvu = min(5, x + 3);
    for (int i = xxvl; i <= xxvu; i++)
        if (i + 3 < 6 && v[i][y] == cl && v[i + 1][y] == cl && v[i + 2][y] == cl && v[i + 3][y] == cl)
            return 1;

    int xxhl = max(0, y - 3);
    int xxhu = min(6, y + 3);
    for (int i = xxhl; i <= xxhu; i++)
        if (i + 3 < 7 && v[x][i] == cl && v[x][i + 1] == cl && v[x][i + 2] == cl && v[x][i + 3] == cl)
            return 1;
    int tx = x, ty = y;
    while (tx > 0 && ty > 0 && x - tx < 3 && y - ty < 3)
    {
        tx--;
        ty--;
    }

    for (int i = 0; i < 7; i++)
        if (tx + i + 3 < 6 && ty + i + 3 < 7 && v[tx + i][ty + i] == cl && v[tx + i + 1][ty + i + 1] == cl && v[tx + i + 2][ty + i + 2] == cl && v[tx + i + 3][ty + i + 3] == cl)
            return 1;
    tx = x, ty = y;
    while (tx > 0 && ty < 6 && x - tx < 3 && ty - y < 3)
    {
        tx--;
        ty++;
    }

    for (int i = 0; i < 7; i++)
        if (tx + i + 3 < 6 && ty - i - 3 >= 0 && v[tx + i][ty - i] == cl && v[tx + i + 1][ty - i - 1] == cl && v[tx + i + 2][ty - i - 2] == cl && v[tx + i + 3][ty - i - 3] == cl)
            return 1;
    return 0;
}
int main()
{
    init;
    vector<vector<int>> mat(6, vector<int>(7, -1));
    vector<int> rw(7, 5);
    bool turn = 0;
    int win = 50;
    for (int i = 0; i < 42; i++)
    {
        int c;
        cin >> c;
        c--;
        mat[rw[c]][c] = turn;
        if (check(mat, rw[c], c, turn))
            win = min(win, i + 1);
        if (rw[c] > 0)
            rw[c]--;
        turn = !turn;
    }
    if (win == 50)
        cout << "DRAW\n";
    else
    {
        if (win % 2)
            cout << "RED" << ' ' << win << '\n';
        else
            cout << "YELLOW" << ' ' << win << '\n';
    }
}