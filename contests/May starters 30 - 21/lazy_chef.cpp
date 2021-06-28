#include<iostream>
using namespace std;

int main()
{
	int t, x, m, d;

	cin >> t;

	while(t--)
	{
		cin >> x >> m >> d;

		cout << min(x*m , (x+d)) << endl;
	}
	

	return 0;
}