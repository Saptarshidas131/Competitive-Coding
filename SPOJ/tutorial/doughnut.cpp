#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int  c, w, k;

		cin >> c >> w >> k;

		if (c*k <= w)
			cout << "yes";
		else
			cout << "no";

		cout << endl;
	}

	return 0;
}