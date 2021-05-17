#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int digit_sum = 0, n;

		cin >> n;

		while (n > 0)
		{
			digit_sum += n%10;
			n /= 10;
		}

		cout << digit_sum << endl;
	}
}