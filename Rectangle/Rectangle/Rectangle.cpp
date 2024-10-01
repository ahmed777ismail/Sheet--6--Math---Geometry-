#include<bits/stdc++.h>
using namespace std;
const int s = 500;
bool xaxis(double a, double xaxis1[s])
{
    if (xaxis1[0] <= a && xaxis1[1] <= a && a <= xaxis1[2] && a <= xaxis1[3])
        return true;
    else
        return false;
}
bool yaxis(double b, double yaxis1[s])
{
    if (yaxis1[0] <= b && yaxis1[1] <= b && yaxis1[2] >= b && yaxis1[3] >= b)
        return true;
    else
        return false;
}
int main() {
    double xaxis1[s], yaxis1[s];
    for (int i = 0; i < 4; i++)
    {
        cin >> xaxis1[i] >> yaxis1[i];
    }
    sort(xaxis1, xaxis1 + 4);
    sort(yaxis1, yaxis1 + 4);
    double counter;
    cin >> counter;
    while (counter--)
    {
        double a1, a2;
        cin >> a1 >> a2;
        xaxis(a1, xaxis1);
        yaxis(a2, yaxis1);
        if (xaxis(a1, xaxis1) && yaxis(a2, yaxis1) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}