#include <iostream>
#include <vector>

using namespace std;
void erSieving(long long n, vector <bool> &isPrime)
{
	long long d = 2;
	while (d * d <= n)
	{
		if (isPrime[d])
		{
			for (long long i = d * d; i <= n; i += d)
			{
				isPrime[i] = false;
			}
		}
		++d;
	}
	
}

int main()
{
	long long n;
	cin >> n;
	long long t = n;
	n *= 2;
	vector <bool> isPrime(n + 1, true);
	isPrime[0] = false;
	isPrime[1] = false;
	
	erSieving(n, isPrime);
	
	for (long long i = 1, j = 1; j <= t; i++)
	{
		if (!isPrime[i])
		{
			cout << i << '\n';
			j++;
		}
	}
}
