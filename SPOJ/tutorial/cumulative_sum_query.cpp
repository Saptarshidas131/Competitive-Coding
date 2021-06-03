#include <iostream>

using namespace std;

int main()
{
	int n, q;

	cin >> n;

	int arr[n];

	for (int k = 0; k < n; k++)
			cin >> arr[k];

	cin >> q;

	while (q--)
	{
			int i, j;

			cin >> i >> j;

			int sum = 0;
			for(int k = i; k <= j; k++)
				sum += arr[k];

			cout << sum << endl;
	}

	return 0;
}