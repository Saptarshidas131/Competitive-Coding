#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;

	cin >> t;

	while(t--)
	{
		cin >> n;

		cout << floor(n/pow(10,(to_string(n)).size()-1) + n%10) << endl;
	}

	return 0;
}