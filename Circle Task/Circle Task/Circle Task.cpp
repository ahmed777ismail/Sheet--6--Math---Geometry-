#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  x1, y1, r, n;
    cin >> x1 >> y1 >> r >> n;
    while (n--)
    {
        long long  x2, y2;
        cin >> x2 >> y2;
        long long Dx = (x1 - x2);
        long long Dy = (y1 - y2);
        long long dis = Dx * Dx + Dy * Dy;
        if (dis <= r * r)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}