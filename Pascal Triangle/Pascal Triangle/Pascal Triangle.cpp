
#include <iostream>

#include <bits/stdc++.h>
#include <cmath>


using namespace std;


long long permutation(int a, int  b)
{
    long long result = a - b, sum = 1;
    for (int i = a; i > result; i--)
    {
        sum *= i;
    }
    return sum;
}

long long combination(int a, int b)
{

    long long result = a - b, sum = 1, sum1 = 1;
    for (int i = 0; i < result; i++) {
        sum *= (a - i);
    }
    for (int i = 1; i <= result; i++)
    {
        sum1 *= i;
    }
    return sum / sum1;
}
long long combination1(int a, int b)
{

    long long result = permutation(a, b), sum = 1;
    for (int i = b; i > 1; i--)
    {
        sum *= i;
    }
    result = result / sum;
    return result;
}


int main()
{
    // srand((unsigned)time(NULL)); //*42 +43 -453
    long long a, b, n;
    cin >> n;
    // cout <<combination(a,b);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j < 15)
                cout << combination1(i, j) << " ";
            else
                cout << combination(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}