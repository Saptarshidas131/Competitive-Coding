#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int t;

	cin >> t;

	while (t--)
	{
		int xa, xb, Xa, Xb;

		cin >> xa >> xb >> Xa >> Xb;

		cout << ceil(Xa/xa) + ceil(Xb/xb) << endl;
	}


	return 0;
}