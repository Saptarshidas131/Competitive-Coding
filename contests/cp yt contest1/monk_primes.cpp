#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n)
{
	if (n == 1)
		return false;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	string s;
	int x = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			x += (int)s[i] + 32;
		}
		
		else if (s[i] >= 97 && s[i] <= 122)
		{
			x -= (int)s[i] - 32;
		}
	}
	if (x < 0)
		x = abs(x);
	//cout << x << endl;
	cout << isprime(x);

	return 0;
}