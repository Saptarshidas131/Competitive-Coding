#include <iostream>

using namespace std;

int main()
{

	int t;

	cin >> t;

	while(t--)
	{
		int n;
		long long  mul = 1;

		cin >> n;

		while(n--)
		{
			int a;

			cin >> a;

			mul *= a;
		}

		//cout << mul << endl;

		int ls = mul%10;
		if (ls == 2 || ls == 3 || ls == 5)
			cout << "YES";
		else
			cout << "NO";

		cout << endl;
	}

	return 0;
}