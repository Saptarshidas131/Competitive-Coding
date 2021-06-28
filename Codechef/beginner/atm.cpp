#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	double y;

	cin >> x >> y;

	if (x > y || x%5 != 0)
		cout << fixed << setprecision(2) << y;
	else
	{
		y -= x + 0.50;
		cout << fixed << setprecision(2) << y;
	}

	return 0;
}