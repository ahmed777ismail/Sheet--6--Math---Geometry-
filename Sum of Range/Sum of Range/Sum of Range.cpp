#include<iostream>
#include<cmath>
using namespace std;

long long sumN(long long  a, long long  b) // to sum from a to b
{
    if (a > b)
        swap(a, b);
    //long long  sum = (b*(b+1) / 2 ) - (a * (a-1) /2);
    long long sum = (b - a + 1) * (a + b) / 2;
    return sum;
}

long long  sumEven(long long  a, long long  b)//to sum even numbers from a to b
{
    if (a > b)
        swap(a, b);
    long long  sum = 0;
    if (a % 2 == 0)
    {
        long long n = (b - a + 2) / 2;
        sum = n * (2 * a + (n - 1) * 2) / 2;
    }
    else
    {
        long long n = (b - (a + 1) + 2) / 2;
        sum = n * (2 * (a + 1) + (n - 1) * 2) / 2;
    }
    return abs(sum);
}

long long  sumOdd(long long  a, long long  b)//to sum odd numbers from a to b
{
    if (a > b)
        swap(a, b);
    long long  sum = sumN(a, b) - sumEven(a, b);
    return abs(sum);
}


int main()
{
    long long  a, b;
    cin >> a >> b;
    cout << sumN(a, b) << endl;
    cout << sumEven(a, b) << endl;
    cout << sumOdd(a, b) << endl;

    return 0;
}