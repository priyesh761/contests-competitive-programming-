#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, d;
    long long arr[4];
    long long max;

    cin >> a >> b >> c >> d;
    arr[0] = a * c;
    arr[1] = a * d;
    arr[2] = b * c;
    arr[3] = b * d;

    max = arr[0];
    for (int i = 1; i < 4; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << max << endl;
}