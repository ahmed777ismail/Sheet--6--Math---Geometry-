#include<iostream>
#include<cmath>
using namespace std;
int isPower(long long n)
{
	int x = 0;
	while (sqrt(n))
	{
		if (n % 2 == 0)
		{
			n /= 2;
			x++;
		}
		else
			break;
	}
	return x;
}
int main()
{
	long long n;
	cin >> n;
	long long num = n;
	int x = isPower(n);
	if (pow(2, x) == num)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;



	return 0;
}