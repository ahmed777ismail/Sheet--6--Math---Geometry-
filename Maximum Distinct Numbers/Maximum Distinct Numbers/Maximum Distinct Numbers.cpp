#include <iostream>
#include <cmath>
using namespace std;
int main() {


    long long int x;
    cin >> x;
    long long int s = 0, z = 0;
    x *= 2;

    s = 1 + 4 * x;
    z = (-1 + sqrt(s)) / 2;
    cout << z;
}