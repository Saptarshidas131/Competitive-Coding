#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while (t--)
	{
		int n, rev = 0;

		cin >> n;

		while (n)
		{
			rev = rev*10 + n%10;
			n /= 10;
		}

		cout << rev << endl;
	}
}