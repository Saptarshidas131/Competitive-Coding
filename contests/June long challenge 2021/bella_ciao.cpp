#include <iostream>

using namespace std;

int main()
{
	long long int t;

	cin >> t;

	while (t--)
	{
		long long int D, d, p, q, x, y, money = 0;

		cin >> D >> d >> p >> q;

		x = D/d;

		// ap
		if (x%2 == 0)
		{
			money += d * ((x / 2) * (2 * p + (x - 1) * q));
		}
		else
		{
			money += d * (x * (p + ((x - 1) / 2) * q));
		}

		// for remainder days
		money +=  (D % d) * (p + (x) * q);

		cout << money << endl;
		
	}

	return 0;
}