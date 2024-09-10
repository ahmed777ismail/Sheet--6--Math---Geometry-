#include<iostream>
#include<cmath>
using namespace std;

bool isPrim(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    if (n != 1)
        return 1;
    else
        return 0;
}

int main()
{
    long long n;
    cin >> n;
    if (isPrim(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}