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
  if (n == 1)
  {
    cout << 4;
    return 0;
  }
  if (n == 2)
  {
    cout << 4 << '\n' << 6;
    return 0;
  }
  if (n == 3)
  {
    cout << 4 << '\n' << 6 << '\n' << 8;
    return 0;
  }
  if (n == 4)
  {
    cout << 4 << '\n' << 6 << '\n' << 8 << '\n' << 9;
    return 0;
  }
	long long t = n;
	n *= 2;
	vector <bool> isPrime(n + 1, true);
	isPrime[0] = false;
	isPrime[1] = false;
	
	erSieving(n, isPrime);
	
	for (long long i = 2, j = 1; j <= t; i++)
	{
		if (!isPrime[i])
		{
			cout << i << '\n';
			j++;
		}
	}
}
