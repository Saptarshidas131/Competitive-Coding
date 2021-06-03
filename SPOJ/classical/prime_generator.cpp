#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while (t--)
	{
		int m, n;
		cin >> m >> n;

		for (int i = m; i <= n; i++)
		{
			int  f = 1;
			for (int j = 2; j <= sqrt(i); j++)
			{

				if (i%j == 0)
				{
					f = 0;
					break;
				}
			}
			if (f == 1 && i != 1)
				cout << i << endl;
		}
		cout << endl;
	}
}