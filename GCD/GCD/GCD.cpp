#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long gcd = __gcd(a, b);
    cout << gcd << " ";
    long long Lcm = (a * b) / gcd;
    cout << Lcm;

    return 0;
}